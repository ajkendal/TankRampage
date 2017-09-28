using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class QuitScript : MonoBehaviour {
    private Text QuitTxt;
    // Use this for initialization
    void Start () {
        QuitTxt = GetComponent<Text>();
        QuitTxt.color = Color.black;

    }
	
	// Update is called once per frame
	void Update () {
        if (Input.GetKey("escape"))
            Application.Quit();
    }
    public void onClick()
    {
        QuitTxt.color = Color.red;
        Application.Quit();
    }

    public void onHover()
    {
        QuitTxt.color = Color.grey;
    }

    public void exitHover()
    {
        QuitTxt.color = Color.black;
    }
}
