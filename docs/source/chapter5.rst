chapter 5: Make a sound
==========================

이 장에서는 부저 모듈을 알아보도록 하자.


.. image:: ./img/chapter5-1.png


5.1 준비물
-------------------------

EASY plug controller Board *1

EASY plug cable *1

USB cable *1

EASY plug Active Buzzer Module *1



5.2 연결 설정
------------------------

다음처럼 보드의 D2~13 임의의 포트에 끼워주면 된다.
여기서는 9번 포트로 설정해 보자.


.. image:: ./img/chapter5-2.png


5.3 code
------------------------
블럭코드는 다음과 같다.
숨쉬는 효과를 줄려면 타이머를 좀 늘리면 좀 더 확인할 수 있다.
짧은 시간 타이머를 넣으면 LED 깜박은 효과와 비슷하다.



.. image:: ./img/chapter4-2.png


아두이노 코드는 다음과 같다.

.. code-block:: python


    int i;

    void setup() {
      pinMode(7, OUTPUT);
      pinMode(8, OUTPUT);
      pinMode(9, OUTPUT);
    }

    void loop() {
      i = 0;

      for (i = 1; i <= 3; i++) {
        digitalWrite(7, HIGH);
        delay(200);
        digitalWrite(8, HIGH);
        delay(200);
        digitalWrite(9, HIGH);
        delayMicroseconds(200);
      }
      for (i = 1; i <= 3; i++) {
        digitalWrite(7, LOW);
        delay(200);
        digitalWrite(8, LOW);
        delay(200);
        digitalWrite(9, LOW);
        delayMicroseconds(200);
      }

    }