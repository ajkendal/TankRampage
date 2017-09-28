using UnityEngine;
using System.Collections;

public class DestroyMine : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	}

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "CannonBall")
        {
            Destroy(gameObject);
            Destroy(collision.gameObject);
        }
    }
}
