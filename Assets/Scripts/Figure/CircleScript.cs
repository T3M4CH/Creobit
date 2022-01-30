using UnityEngine;
using UnityEngine.UI;
public class CircleScript : Figure
{
    [SerializeField]
    int size = 2;
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
        rect.sizeDelta = new Vector2(size * 100, size * 100);
    }
    public override int GetSize() => Size;
    public override string GetFigureType() => "circle";
}
