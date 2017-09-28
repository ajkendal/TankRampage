using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameMenuScript : MonoBehaviour {
    private Text DestroyTxt;
    public Text FinalScore;

	// Use this for initialization
	void Start () {
        DestroyTxt = GetComponent<Text>();
        DestroyTxt.color = Color.black;
        FinalScore.text = CannonBall.score.ToString();
    }

    void Update() {
        
    }

    public void onClick(){
        DestroyTxt.color = Color.red;
        LoadMap.mineCount = 2;
        SceneManager.LoadScene(1);
    }

    public void onHover(){
        DestroyTxt.color = Color.green;
    }

    public void exitHover(){
        DestroyTxt.color = Color.black;
    }
}
