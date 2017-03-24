   import processing.serial.*;

   Serial myPort; 
   int valor;     

   void setup() {
      size(300, 300);
      String portName = Serial.list()[0];
      myPort = new Serial(this, portName, 9600);
   }

   void draw() {
      if (myPort.available() > 0) { 
         valor = myPort.read();        
         color colorNuevo = color(0, valor, 0);
         background(colorNuevo); 
         //coolor de borde , posicion, y tamaño
         fill(255,255-valor,0);
         stroke(255,255-valor,0);
         ellipse(55, 300-valor, valor/5,valor/5);
      }
   }