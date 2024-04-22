package school.karate;

import school.karate.exceptions.FallenException;
import school.karate.exceptions.KnockDownException;

public class KarateTest {
	public static void main(String[] args) {
		
		// creating object of KungFuMaster class
		KungFuMaster object=new KungFuMaster();	
		
		//Here printing message and handling check exception..
		try {
			// calling knockOrFight() method.....
			object.knockOrFight();
		}catch (KnockDownException e) {
			System.out.println(e);
		}catch(FallenException e) {
			System.out.println(e);
		}
		
}
}
