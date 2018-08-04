using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class CallNativeCode : MonoBehaviour {

    [DllImport("native-lib")]
    private static extern int AddTwoIntegers(int i1, int i2);

    void OnGUI ()
	{
		int x = 3;
		int y = 10;
        GUI.Label(new Rect(15, 125, 450, 100), "adding " + x + " and " + y + " in native code equals " + AddTwoIntegers(x,y));
    }
}
