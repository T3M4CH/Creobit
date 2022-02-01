using UnityEngine;
using UnityEngine.UI;

public class TriangleInitializer : MonoBehaviour
{
    [SerializeField] int energy = 3;
    public int Energy
    {
        get => energy;
        set
        {
            energy = value;
            resources.ChangeText();
        }
    }
    [SerializeField] int count;
    [SerializeField] GameObject prefab;
    [SerializeField] Constellator constellator;

    [SerializeField] RectTransform rect;
    [SerializeField] ResourcesManager resources;
    private void Awake()
    {
        resources.OnChangeEvent += ChangeText;

        constellator.SpawnExtraFigures += () =>
        {
            ChangeSize();
            constellator.Create(prefab, count);
            Energy = energy;
        };
    }

    void ChangeSize()
    {
        rect.sizeDelta = new Vector2(500, 50);
        rect.anchoredPosition = new Vector2(300, rect.anchoredPosition.y);
        resources.movesText.rectTransform.sizeDelta = rect.sizeDelta;
    }
    void ChangeText(Text _text)
    {
        _text.text += $" , Energy {energy}";
    }
}
