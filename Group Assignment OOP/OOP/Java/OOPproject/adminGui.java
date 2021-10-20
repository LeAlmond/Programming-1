package OOPproject;

import java.io.*;
import java.util.Scanner;

public class adminGui {

    String username;
    String password;
    Long phone;


    public void saveUserToFile(String username,String password, String phone1) {
        FileWriter outFileStream = null;
        long phone = Long.parseLong(phone1.replaceAll("-", ""));
        String useridentity = username + "\t" + password + "\t" + phone + "\n";
        try {
            outFileStream = new FileWriter(new File("users.txt"), true);
            outFileStream.write(useridentity);
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            if (outFileStream != null) {
                try {
                    outFileStream.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public void retrieveUserFromFile(Long searchPhone) {
        Scanner input = null;
        Scanner inFileStream = null;
        try {
            input = new Scanner(System.in);
            inFileStream = new Scanner(new File("users.txt"));
            searchPhone = input.nextLong();
            while (inFileStream.hasNext()) {
                this.username = inFileStream.nextLine();
                this.password = inFileStream.nextLine();
                this.phone = inFileStream.nextLong();

                if (phone.equals(searchPhone)) {
                    System.out.println(username + "\t" + password + "\t" + phone + "\n");
                    return;
                }
            }
            System.out.print("Enter User to search database:->");
            this.username ="";
            this.password = "";
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            if (input != null) {
                input.close();
            }
            if (inFileStream != null) {
                inFileStream.close();
            }
        }
    }
    
}
