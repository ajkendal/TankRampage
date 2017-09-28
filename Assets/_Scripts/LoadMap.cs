using UnityEngine;
using System.Collections;

public class LoadMap : MonoBehaviour {
    public GameObject Ammo;
    public GameObject LoadGameMap;
    public GameObject AmmoSpot1;
    public GameObject AmmoSpot2;
    public GameObject AmmoSpot3;
    public static int mineCount = 2;
    public GameObject Mine;
    public GameObject MineField;

    private bool isTankCollide = false;
	// Use this for initialization
	void Start () {

	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnTriggerEnter(Collider Tank){
        int ammoSuppply = 0;
        Vector3 newPosition = new Vector3(LoadGameMap.transform.position.x, LoadGameMap.transform.position.y, LoadGameMap.transform.position.z + 56.5f);
        Vector3 ammoPosition1 = new Vector3(AmmoSpot1.transform.position.x, AmmoSpot1.transform.position.y + .4f, AmmoSpot1.transform.position.z);
        Vector3 ammoPosition2 = new Vector3(AmmoSpot2.transform.position.x, AmmoSpot2.transform.position.y + .4f, AmmoSpot2.transform.position.z);
        Vector3 ammoPosition3 = new Vector3(AmmoSpot3.transform.position.x, AmmoSpot3.transform.position.y + .4f, AmmoSpot3.transform.position.z);
        if (Tank.tag == "Player" && isTankCollide == false){
            ammoSuppply = Random.Range(0, 3);
            Instantiate(LoadGameMap, newPosition, LoadGameMap.transform.rotation);
            //Debug.Log(ammoSuppply);
            if(ammoSuppply == 1)
                Instantiate(Ammo, ammoPosition1, Ammo.transform.rotation);
            else if(ammoSuppply == 2)
                Instantiate(Ammo, ammoPosition2, Ammo.transform.rotation);
            else if(ammoSuppply == 3)
                Instantiate(Ammo, ammoPosition3, Ammo.transform.rotation);
            ammoSuppply = 0;
            for (int x = mineCount; x > 0; x--)
            {
                Vector3 mineFieldPosition = new Vector3(MineField.transform.position.x + Random.Range(-5, 5), MineField.transform.position.y, MineField.transform.position.z + Random.Range(5, 60));
                Instantiate(Mine, mineFieldPosition, Mine.transform.rotation);
                Debug.Log(mineCount);
            }
            mineCount = mineCount + 1;
            isTankCollide = true;
            GameObject tank = GameObject.Find("Player");
            Tank tankScript = tank.GetComponent<Tank>();
            tankScript.setSpeed += 1.5f;
            //Debug.Log(tankScript.setSpeed);
        }
    }
}
