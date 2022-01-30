using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(menuName = "Level")]

public class SceneInfo : ScriptableObject
{
    [SerializeField] int countSquares = 0;
    [SerializeField] int countCircles = 0;
    [SerializeField] int countTriangles = 0;

    public int CountSquares => countSquares;
    public int CountCircles => countCircles;
    public int CountTriangles => countTriangles;

    public int Count => countSquares + countCircles + countTriangles;
}
