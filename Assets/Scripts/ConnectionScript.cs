using UnityEngine;

public class ConnectionScript : MonoBehaviour
{
    [SerializeField] Figure firstFigure;
    [SerializeField] Figure secondFigure;
    public Figure firstObject { get => firstFigure; set => firstFigure = value; }
    public Figure secondObject { get => secondFigure; set { secondFigure = value; } }

    public delegate void OnReleaseDelegate();
    public event OnReleaseDelegate OnRelease;

    void ConnectObjects()
    {
        firstFigure.GetComponent<ISelectionResponse>().OnSelection(secondFigure);
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
            if (figure.GetFigureType() == firstFigure.GetFigureType())
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
