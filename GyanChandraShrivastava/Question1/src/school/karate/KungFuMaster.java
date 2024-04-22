package school.karate;

import school.karate.exceptions.FallenException;
import school.karate.exceptions.KnockDownException;

public class KungFuMaster {
	public void knockOrFight() throws KnockDownException { 
		for(int i=0;i<20;i++) {
			//Generating random number..
			double data=Math.random();
			int number=(int)(data*100);
			// applying condition..
			if(number>90) {
				throw new KnockDownException("knock down exception is here...( The Number is ->"+number+")");
			}else if(number<30) {
				throw new FallenException("Fallen exception is here...( The Number is ->"+number+")");
			}
			else {
				System.out.println(number);
			}
			
		}
	}
}
