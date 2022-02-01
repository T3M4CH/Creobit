using UnityEngine;

public class Constellator : MonoBehaviour
{
    public SceneInfo level;
    public bool TrianglesEnabled;
    [SerializeField] GameObject SquarePrefab;
    [SerializeField] GameObject CirclePrefab;
    [SerializeField] Figure[] SquaresAndCircles;

    public delegate void SpawnExtraFiguresDelegate();
    public event SpawnExtraFiguresDelegate SpawnExtraFigures;

    void Start()
    {
        ArrangeObjects(level);
    }
    public void ArrangeObjects(SceneInfo level)
    {
        this.level = level;
        if (SquaresAndCircles != null) ClearLevel();
        Create(CirclePrefab, level.CountCircles);
        Create(SquarePrefab, level.CountSquares);
        SquaresAndCircles = FindObjectsOfType<Figure>();
        SpawnExtraFigures?.Invoke();
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
        SquaresAndCircles = null;
    }

    public void Create(GameObject prefab, int count)
    {
        for (int i = 0; i < count; i++)
        {
            Instantiate(prefab, transform).GetComponent<RectTransform>().anchoredPosition
                = new Vector2(Random.Range(-800, 800), Random.Range(-400, 400));
        }
    }

    void SmartReSize(bool trianglesEnable)
    {
        for (int i = 0; i < SquaresAndCircles.Length - level.CountCircles - 1; i++)
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
