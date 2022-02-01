using UnityEngine;
using UnityEngine.UI;

public class ResourcesManager : MonoBehaviour
{
    public Text movesText;
    [SerializeField] RectTransform rect;

    public delegate void ChangeTextDelegate(Text text);
    public event ChangeTextDelegate OnChangeEvent;
    int moves;
    public int Moves { get => moves; set { moves = value; ChangeText(); } }
    private void Start()
    {
        Moves = moves;
        SetSize();
    }
    public void ChangeText()
    {
        movesText.text = $"Moves : {moves}";
        OnChangeEvent?.Invoke(movesText);
    }
    void SetSize()
    {
        rect.sizeDelta = new Vector2(250, 50);
        rect.anchoredPosition = new Vector2(300, rect.anchoredPosition.y);
        movesText.rectTransform.sizeDelta = rect.sizeDelta;
    }
}
