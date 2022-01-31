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
            movesText.text += $" , Energy {energy}";
        }
    }
    [SerializeField] int count;
    [SerializeField] GameObject prefab;
    [SerializeField] Constellator constellator;

    [SerializeField] Text movesText;
    [SerializeField] RectTransform rect;
    [SerializeField] ResourcesManager resources;
    private void Start()
    {
        resources = FindObjectOfType<ResourcesManager>();
        constellator.SpawnExtraFigures += () =>
        {
            rect.sizeDelta = new Vector2(500, 50);
            rect.anchoredPosition = new Vector2(300, rect.anchoredPosition.y);
            movesText.rectTransform.sizeDelta = rect.sizeDelta;
            constellator.Create(prefab, count);
            Energy = energy;
        };
    }
}
