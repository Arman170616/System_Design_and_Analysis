import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.EOFException;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class EOFExceptionExample {
     
    //The name of the input file.
    private final static String FILENAME = "input.txt";
     
    private static void writeToFile() throws IOException {
        DataOutputStream out = new DataOutputStream(new FileOutputStream(FILENAME));
         
        //Write a string to the stream.
        String str = "Hello from john dalton";
        for(int i = 0; i < str.length(); ++i)
            out.writeChar(str.charAt(i));
         
        //Close the data stream.
        out.close();
         
        return;
    }
     
    public static void main(String[] args) {
        DataInputStream input = null;
        try {
            //Write some integers to the file.
            writeToFile();
             
            // Read all characters, until an EOFException is thrown.
            input = new DataInputStream(new FileInputStream(FILENAME));
            while(true) {
                char num;
                try {
                    num = input.readChar();
                    System.out.println("Reading from file: " + num);
                }
                catch (EOFException ex1) {
                    break; //EOF reached.
                }
                catch (IOException ex2) {
                    System.err.println("An IOException was caught: " + ex2.getMessage());
                    ex2.printStackTrace();
                }
            }
        }
        catch (IOException ex) {
            System.err.println("An IOException was caught: " + ex.getMessage());
            ex.printStackTrace();
        }
        finally {
            try {
                // Close the input stream.
                input.close();
            }
            catch(IOException ex) {
                System.err.println("An IOException was caught: " + ex.getMessage());
                ex.printStackTrace();
            }
        }
    }
}
