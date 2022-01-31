using UnityEngine;

public class InteractorSquare : ConnectionInteractor
{
    Figure firstFigure;
    ResourcesManager resources;
    ConnectionScript connectionScript;

    private void Start()
    {
        firstFigure = GetComponent<Figure>();
        connectionScript = FindObjectOfType<ConnectionScript>();
        resources = FindObjectOfType<ResourcesManager>();
    }
    public override void Subscribe()
    {
        connectionScript.OnSelected += Connection;
    }
    public override void Connection(Figure secondFigure)
    {
        Debug.Log(secondFigure.name);
        if (firstFigure.GetSize() <= secondFigure.GetSize())
        {
            firstFigure.transform.SetParent(secondFigure.transform);
            firstFigure.GetComponent<RectTransform>().anchoredPosition = Vector2.zero;
            resources.Moves += 1;
            Destroy(GetComponent<ColorManager>());
            Destroy(secondFigure.GetComponent<ColorManager>());
        }
        Unsubscribe();
    }
    public override void Unsubscribe()
    {
        connectionScript.OnSelected -= Connection;
    }
}
