#pragma config(Sensor, S3,     ultrasonicSensor, sensorSONAR)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main(){

	while(true){

	    if(SensorValue[ultrasonicSensor] <=70){
	       writeDebugStreamLine("I am in front of the robot");

}
	  // writeDebugStreamLine("%d",SensorValue[ultrasonicSensor];

}




}
