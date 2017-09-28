using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Tank : MonoBehaviour
{
    public Transform Player;
    private CharacterController controller;
    public Transform Top;
    public Transform Barrel;
    public Rigidbody Bullit;
    public float RotateSpeed = 5f;
    public float MoveSpeed = 20f;
    public AudioSource CannonShot;
    private int shotAmount;
    public Text ammoCount;
    public float setSpeed = 3f;
    private int timer = 0;
    private static int healthAmount = 100;

    // Use this for initialization
    void Start()
    {
        controller = GetComponent<CharacterController>();
        CannonShot = GetComponent<AudioSource>();
        shotAmount = 20;
        ammoCount.text = "Ammo: " + shotAmount;
        CannonBall.score = 0;
        healthAmount = 100;
    }

    // Update is called once per frame
    void Update()
    {
        MovePlayer();
        Shoot();
        timer += (int)Time.timeScale;
        AssignPoints(timer);
        checkShots();
        endGame();
    }

    void MovePlayer()
    {
        float move = Time.deltaTime * setSpeed;
        Player.Translate(0f, 0f, move);
        float movementX = Input.GetAxis("Horizontal") * MoveSpeed * Time.deltaTime;

        if (Input.GetAxis("Horizontal") < 0 && Player.position.x > -4f)
        {  //pressing left
            controller.Move(transform.right * movementX);
        }
        if (Input.GetAxis("Horizontal") > 0 && Player.position.x < 4f)
        {  //pressing right
            controller.Move(transform.right * movementX);
        }
        if (Top.rotation.y < -0.45f)
            Top.rotation = Quaternion.AngleAxis(-55, Vector3.up);

        if (Top.rotation.y > 0.45f)
            Top.rotation = Quaternion.AngleAxis(55, Vector3.up);

        if (Input.GetAxis("Mouse X") < 0 && Top.rotation.y > -0.45f)
        {  //rotate left
            Top.transform.Rotate(0, Input.GetAxis("Mouse X"), 0);
        }
        if (Input.GetAxis("Mouse X") > 0 && Top.rotation.y < 0.45f)
        {  //rotate right
            Top.transform.Rotate(0, Input.GetAxis("Mouse X"), 0);
        }
        if (Input.GetAxis("Mouse Y") < 0 && Top.rotation.x < 0.05f)
        {  //rotate down
            Top.transform.Rotate(Input.GetAxis("Mouse Y") * -1, 0, 0);
        }
        if (Input.GetAxis("Mouse Y") > 0 && Top.rotation.x > -0.01f)
        {  //rotate up
            Top.transform.Rotate(Input.GetAxis("Mouse Y") * -1, 0, 0);
        }
    }

    void Shoot()
    {
        if (Input.GetMouseButtonDown(0) && shotAmount > 0)
        {
            Rigidbody b = Instantiate(Bullit, Barrel.position, Quaternion.identity) as Rigidbody;
            b.AddForce(Barrel.forward * 50f, ForceMode.Impulse);
            CannonShot.Play();
            shotAmount = shotAmount - 1;
            checkShots();
        }
    }
    void AssignPoints(int timer)
    {
        if (timer % 20 == 0)
            CannonBall.score += 20;
    }
    void OnTriggerEnter(Collider Ammo)
    {
        //Debug.Log(gameObject.name + ": collider with " + Ammo.gameObject.name);
        if (Ammo.name == "Cube")
        {
            shotAmount += 6;
        }
        if (Ammo.gameObject.tag == "Mine")
        {
            healthAmount -= 101;
        }
    }
    void checkShots()
    {
        ammoCount.text = "Ammo: " + shotAmount;
    }
    void endGame()
    {
        if ((healthAmount <= 0))
        {
            SceneManager.LoadScene(2);
        }
    }
}
