using UnityEngine;

public class MenuScript : MonoBehaviour
{
    [SerializeField] SceneInfo[] levels;
    [SerializeField] GameObject panel;
    [SerializeField] Constellator constellator;

    public void LoadLevel(int i)
    {
        constellator.ArrangeObjects(levels[i]);
    }
    public void OnClick()
    {
        panel.SetActive(!panel.activeInHierarchy);
    }
}
