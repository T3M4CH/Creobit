using UnityEngine;

public class InteractorSquare : MonoBehaviour, ISelectionResponse
{
    Figure firstFigure;
    ResourcesManager resources;

    private void Start()
    {
        firstFigure = GetComponent<Figure>();
        resources = FindObjectOfType<ResourcesManager>();
    }
    public void OnSelection(Figure figure)
    {
        if (figure.GetFigureType() == "circle")
        {
            if (firstFigure.GetSize() <= figure.GetSize())
            {
                firstFigure.transform.SetParent(figure.transform);
                firstFigure.GetComponent<RectTransform>().anchoredPosition = Vector2.zero;
                resources.Moves += 1;
                Destroy(GetComponent<ColorManager>());
                Destroy(figure.GetComponent<ColorManager>());
            }
        }
    }
}
