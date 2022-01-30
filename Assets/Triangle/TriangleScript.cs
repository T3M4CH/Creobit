using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriangleScript : Figure
{
    [SerializeField]
    int size;
    public int Size => size;

    RectTransform rect;
    void Start()
    {
        rect = GetComponent<RectTransform>();
        ChangeSize(size);
    }
    public override void ChangeSize(int size)
    {
        this.size = size;
        if (rect == null)
        {
            rect = GetComponent<RectTransform>();
        }
        rect.sizeDelta = new Vector2(size * 70, size * 70);
    }
    public override int GetSize() => Size;
    public override string GetFigureType() => "triangle";
}
