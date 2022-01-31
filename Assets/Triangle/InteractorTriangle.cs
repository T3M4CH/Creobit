using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InteractorTriangle : ConnectionInteractor
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
    public override void Subscribe()
    {
        connectionScript.OnSelected += Connection;
    }
    public override void Connection(Figure secondFigure)
    {
        if (secondFigure.GetFigureType() == "square")
        {
            CircleScript circle = FindObjectOfType<CircleScript>();
            if (circle != null)
            {
                resources.Energy -= 1;
                secondFigure.GetComponent<SquareScript>().ChangeSize(circle.GetSize());
                Destroy(firstFigure.gameObject);
            }
        }
        Unsubscribe();
    }
    public override void Unsubscribe()
    {
        connectionScript.OnSelected -= Connection;
    }
}
