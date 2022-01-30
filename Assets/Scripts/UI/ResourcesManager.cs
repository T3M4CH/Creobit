using UnityEngine;
using UnityEngine.UI;

public class ResourcesManager : MonoBehaviour
{
    [SerializeField] Text movesText;
    [SerializeField] Button addTriangles;
    [SerializeField] RectTransform rect;
    [SerializeField] Constellator constellator;
    [SerializeField] int energy;
    int moves;
    bool energyEnable = false;
    public int Moves { get => moves; set { moves = value; ChangeText(); } }
    public int Energy { get => energy; set { energy = value; ChangeText(); } }
    private void Start()
    {
        energyEnable = constellator.TrianglesEnabled;
        Moves = moves;
        addTriangles.onClick.AddListener(() => { energyEnable = !energyEnable; SetSize(); ChangeText(); });
        SetSize();
    }
    void ChangeText()
    {
        movesText.text = $"Moves : {moves}";
        if (energyEnable)
        {
            movesText.text += $" , Energy : {energy}";
        } 
    }
    void SetSize()
    {
        if (energyEnable)
        {
            rect.sizeDelta = new Vector2(500, 50);
            rect.anchoredPosition = new Vector2(300, rect.anchoredPosition.y); 
            movesText.rectTransform.sizeDelta = rect.sizeDelta;
        }
        else
        {
            rect.sizeDelta = new Vector2(250, 50);
            rect.anchoredPosition = new Vector2(300, rect.anchoredPosition.y);
            movesText.rectTransform.sizeDelta = rect.sizeDelta;
        }
    }
}
