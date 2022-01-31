using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Figure : MonoBehaviour
{
    public virtual string GetFigureType()
    {
        return string.Empty;
    }

    public virtual int GetSize()
    {
        return default;
    }

    public virtual void ChangeSize(int size) { }

}
