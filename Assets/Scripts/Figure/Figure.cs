using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Figure : MonoBehaviour
{
    public abstract string GetFigureType();

    public abstract int GetSize();

    public abstract void ChangeSize(int size);
}
