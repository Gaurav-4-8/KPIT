package school.karate.exceptions;

@SuppressWarnings("serial")
public class FallenException extends RuntimeException {
	
	// creating parameterized constructor
	public FallenException(String message) {
		super(message);		
	}
}
