using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CannonBall : MonoBehaviour
{

    public ParticleSystem Flames1;
    public ParticleSystem Flames2;
    public ParticleSystem BurnMark;
    public Text scoreText;
    public static int score = 0;

    // Use this for initialization
    void Start()
    {
        updateScore();
    }

    // Update is called once per frame
    void Update()
    {
        updateScore();
    }

    void OnCollisionEnter(Collision collision)
    {
        //Debug.Log (gameObject.name + ": collider with " + collision.gameObject.tag);

        if (collision.gameObject.tag == "Mine")
        {
            StartExplosion(collision.contacts[0].point);
        }
        else if (collision.gameObject.tag == "Object")
        {
            StartFlame(collision.contacts[0].point);
        }
        //Debug.Log(score);
    }

    void StartFlame(Vector3 damage)
    {
        Destroy(gameObject);
        Instantiate(Flames1, damage, Quaternion.identity);
        Instantiate(BurnMark, damage, Quaternion.identity);
        Flames1.Play();
        score = score + 5;
        updateScore();
    }
    void StartExplosion(Vector3 damage)
    {
        Instantiate(Flames2, damage, Quaternion.identity);
        score = score + 15;
        updateScore();
    }

    void updateScore()
    {
        scoreText.text = "Score: " + score.ToString();
    }
}
