using UnityEngine;
using UnityEngine.UI;

public class Constellator : MonoBehaviour
{
    public SceneInfo level;
    public bool TrianglesEnabled;
    [SerializeField] Button addTriangles;
    [SerializeField] GameObject SquarePrefab;
    [SerializeField] GameObject CirclePrefab;
    [SerializeField] GameObject TrianglePrefab;
    [SerializeField] Figure[] SquaresAndCircles;

    void Start()
    {
        ArrangeObjects(level);
        addTriangles.onClick.AddListener(() => { TrianglesEnabled = !TrianglesEnabled; });
    }
    public void ArrangeObjects(SceneInfo level)
    {
        this.level = level;
        if (SquaresAndCircles != null) ClearLevel();
        Create(CirclePrefab, level.CountCircles);
        Create(SquarePrefab, level.CountSquares);
        SquaresAndCircles = FindObjectsOfType<Figure>();
        if (TrianglesEnabled) Create(TrianglePrefab, level.CountTriangles);
        SetRandomCirclesSize();
        SmartReSize(TrianglesEnabled);
    }

    private void ClearLevel()
    {
        SquaresAndCircles = FindObjectsOfType<Figure>();
        foreach(Figure figure in SquaresAndCircles)
        {
            Destroy(figure.gameObject);
        }
    }

    void Create(GameObject prefab, int count)
    {
        for (int i = 0; i < count; i++)
        {
            Instantiate(prefab, transform).GetComponent<RectTransform>().anchoredPosition
                = new Vector2(Random.Range(-800, 800), Random.Range(-400, 400));
        }
    }

    void SmartReSize(bool trianglesEnable)
    {
        for (int i = 0; i < SquaresAndCircles.Length - level.CountCircles - (trianglesEnable ? level.CountTriangles : 0); i++)
        {
            if (i + level.CountSquares < SquaresAndCircles.Length)
            {
                SquaresAndCircles[i].ChangeSize(Random.Range(1, SquaresAndCircles[i + level.CountSquares].GetSize() + 1));
            }
        }
    }
    void SetRandomCirclesSize()
    {
        for (int i = level.CountSquares; i < SquaresAndCircles.Length; i++)
        {
            SquaresAndCircles[i].ChangeSize(Random.Range(1, 4));
        }
    }
}
