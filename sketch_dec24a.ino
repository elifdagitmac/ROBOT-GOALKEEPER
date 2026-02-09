 #include <Servo.h> 
 Servo motor; 
 int deger; //Anlık okuduğumuz değer 
 int derece;// Gelen değeri çevireceğimiz derece  
  
 void setup() { 
   motor.attach(5); //motorun sinyal pinini tanımladık   
    
  
 } 
  
void loop() { 
   deger = analogRead (A0); //joystick değerinin okunacağı pin  
   derece = map(deger, 0,1023,0,180);//map fonksiyonu joystickten gelen değeri önce sayısal veriye daha sonra 0 ve 180 arasında dereceye döndürüyoruz  
   motor.write(derece);// motor elde ettiğimiz dereceye göre hareket sağlıyor  
} 
  
 } 
