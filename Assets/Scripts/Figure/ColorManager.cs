using UnityEngine;
using UnityEngine.UI;

public class ColorManager : MonoBehaviour
{
    Image imageComponent;
    ConnectionScript connectionComponent;
    private void Start()
    {
        imageComponent = GetComponent<Image>();
        connectionComponent = transform.parent.GetComponent<ConnectionScript>();
    }
    public void SetTransparent(byte alpha)
    {
        if (imageComponent != null)
        {
            Color32 color = imageComponent.color;
            color.a = alpha;
            imageComponent.color = color;
        }
    }

    public void OnClick()
    {
        SetTransparent(170);
        connectionComponent.OnRelease += OnRelease;
        connectionComponent.CommitObject(gameObject.GetComponent<Figure>());
    }

    void OnRelease()
    {
        SetTransparent(255);
        connectionComponent.OnRelease -= OnRelease;
    }
}
