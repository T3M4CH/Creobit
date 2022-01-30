using UnityEngine;

public class ConnectionScript : MonoBehaviour
{
    [SerializeField] Figure firstFigure;
    [SerializeField] Figure secondFigure;
    public Figure firstObject { get => firstFigure; set => firstFigure = value; }
    public Figure secondObject { get => secondFigure; set { secondFigure = value; } }

    public delegate void OnReleaseDelegate();
    public event OnReleaseDelegate OnRelease;

    [SerializeField] ResourcesManager resources;

    void ConnectObjects()
    {
        if (firstFigure.GetFigureType() == "square" && secondFigure.GetFigureType() == "circle")
        {
            if (firstFigure.GetSize() <= secondFigure.GetSize())
            {
                firstFigure.transform.SetParent(secondFigure.transform);
                firstFigure.GetComponent<RectTransform>().anchoredPosition = Vector2.zero;
                resources.Moves += 1;
                Destroy(firstFigure.GetComponent<FigureManager>());
                Destroy(secondFigure.GetComponent<FigureManager>());
            }
        }
        if (firstFigure.GetFigureType() == "triangle" && secondFigure.GetFigureType() == "square")
        {
            CircleScript circle = FindObjectOfType<CircleScript>();
            if (circle != null)
            {
                resources.Energy -= 1;
                secondFigure.GetComponent<SquareScript>().ChangeSize(circle.GetSize());
                Destroy(firstFigure.gameObject);
            }
        }
        ReleaseFigures();
    }
    public void CommitObject(Figure figure)
    {
        if (firstFigure == null)
        {
            firstObject = figure;
        }
        else
        {
            if (figure == firstFigure)
            {
                ReleaseFigures();
            }
            else
            {
                secondObject = figure;
                ConnectObjects();
            }
        }
    }
    void ReleaseFigures()
    {
        OnRelease.Invoke();
        firstObject = null;
        if (secondFigure != null) secondObject = null;

    }
}
