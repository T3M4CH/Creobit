using UnityEngine;

public class InteractorTriangle : MonoBehaviour, ISelectionResponse
{
    Figure firstFigure;
    TriangleInitializer resources;
    ConnectionScript connectionScript;

    private void Start()
    {
        firstFigure = GetComponent<Figure>();
        connectionScript = FindObjectOfType<ConnectionScript>();
        resources = FindObjectOfType<TriangleInitializer>();
    }

    public void OnSelection(Figure figure)
    {
        if (figure.GetFigureType() == "square" && resources.Energy > 0)
        {
            CircleScript circle = FindObjectOfType<CircleScript>();
            if (circle != null)
            {
                resources.Energy -= 1;
                figure.GetComponent<SquareScript>().ChangeSize(circle.GetSize());
                Destroy(firstFigure.gameObject);
            }
        }
    }
}
