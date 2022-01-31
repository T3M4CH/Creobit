using UnityEngine;
using UnityEngine.UI;

public class ResourcesManager : MonoBehaviour
{
    [SerializeField] Text movesText;
    [SerializeField] RectTransform rect;
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
    }
    void SetSize()
    {
        rect.sizeDelta = new Vector2(250, 50);
        rect.anchoredPosition = new Vector2(300, rect.anchoredPosition.y);
        movesText.rectTransform.sizeDelta = rect.sizeDelta;
    }
}
