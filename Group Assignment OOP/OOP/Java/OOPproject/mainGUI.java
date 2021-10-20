package OOPproject;

import OOPproject.adminGui;
import OOPproject.customerGui;

import java.awt.geom.RoundRectangle2D;

import java.awt.*;
import java.awt.event.*;
/*import java.awt.Color;
import java.awt.Component;
import java.awt.Font;
import java.awt.GridLayout;
import java.awt.Insets;
import java.awt.Graphics;
import java.awt.Shape;*/

import java.text.ParseException;

import javax.swing.*;
import javax.swing.BorderFactory;
import javax.swing.text.MaskFormatter;
import javax.swing.border.Border;
/*import javax.swing.Icon;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFormattedTextField;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.JToggleButton;
import javax.swing.SwingConstants;
import javax.swing.border.Border;*/

public class mainGUI {

    final int panelw = 1000;
    final int panelh = 600;
    final int uih = 25;
    final int admin = 1;
    final int customer = 0;
    final int adminsetX = 125;
    final int adminsetY = 470;
    final int adminoffsetX = adminsetX + 5;
    final int adminoffsetY = adminsetY + 9;

    private static Font Oswald;

    private int panelStatus = 0;

    private static JFrame frame;

    private static JPanel imagePanel;
    private static JPanel loginPanel;
    private static JPanel basePanel;

    private static JLabel Welcome;
    private static JLabel picLabel;

    private static Icon tech;
    private static Icon server;

    private static JTextField phoneText;
    private static JTextField userText;
    private static JTextArea adminSwap;

    private static JComboBox<String> providerBox;
    private static JPasswordField passwordText;

    private static JToggleButton adminButton;
    private static JButton loginButton;

    private static JButton exitButton;

    private static String[] providors = { "Digicel", "Flow" };

    public mainGUI() {

        Oswald = new Font("Oswald", Font.TYPE1_FONT, 15);

        tech = new ImageIcon("C:/Users/sptic/Desktop/tech1.png");
        server = new ImageIcon("C:/Users/sptic/Desktop/server1.png");

        // Calls Function To create main background Plate
        createFrame();

        // Sets the Primary Panel Layout to a 2x1 Grid to auto align the two
        // sections(loginPanel and imagePanel)
        basePanel.setLayout(new GridLayout(1, 2));

        imagePanel = new JPanel();
        loginPanel = new JPanel();

        // Assigns default image to variable
        picLabel = new JLabel(tech);
        // Sets size and location of picLabel in fomat of ( x, y, width, height)
        picLabel.setBounds(10, 10, 480, 580);

        // adds created panels to main Panel
        basePanel.add(imagePanel);
        basePanel.add(loginPanel);

        // sets layout to be null, to allow for free placement of JAttributes
        imagePanel.setLayout(null);
        loginPanel.setLayout(null);

        // Calls Function To create and add Exit Button
        addExitButton();

        // Calls Function To create and add User Login interface
        addUserLogin();

        // Calls Function To create and add Admin functionalities to the user interface
        addAdminLogin();

        // Calls Function To create and add Login button
        addLoginButton();

        // Creates and defines Welcome! message
        Welcome = new JLabel("WELCOME!", SwingConstants.CENTER);
        Welcome.setBounds(150, 150, 200, 50);
        Welcome.setForeground(Color.white);
        Welcome.setFont(new Font("Oswald", Font.TYPE1_FONT, 34));

        // adds Welcome! message and adds picture to left panel
        loginPanel.add(Welcome);
        imagePanel.add(picLabel);

        // set Panel Backgrounds
        imagePanel.setBackground(new Color(250, 245, 255));
        loginPanel.setBackground(new Color(120, 25, 255));

    }

    public void createPanel() {

        basePanel = new JPanel();
        // adds Base panel to the background frame for everything else to be mounted to
        frame.add(basePanel);

        basePanel.setBounds(0, 0, panelw, panelh);
        basePanel.setLayout(null);

    }

    public void createFrame() {

        frame = new JFrame();

        // Sets the default opereaction when the exit button is clicked
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        // Sets layout to null to allow free placement
        frame.setLayout(null);

        frame.setBackground(null);
        // Calls Creat Panel Function to create and add base panel
        createPanel();

        // Removes title bar, rounds the edge of the frame and sets default size
        frame.setUndecorated(true);
        frame.setShape(new RoundRectangle2D.Double(0, 0, panelw, panelh, 30, 30));
        frame.setSize(panelw, panelh);
        // sets location of the frame to the center of the screen
        frame.setLocationRelativeTo(null);
        // makes frame visible
        frame.setVisible(true);

    }

    public void addUserLogin() {

        MaskFormatter fmt;
        try {
            fmt = new MaskFormatter("876-###-####");
            phoneText = new JFormattedTextField(fmt);
            phoneText.setText("876-111-1111");
        } catch (ParseException e1) {
            // TODO Auto-generated catch block
            e1.printStackTrace();
        }

        phoneText.setText("User Phone number");
        phoneText.setBounds(125, 250, 250, uih);
        phoneText.setBorder(BorderFactory.createMatteBorder(0, 0, 1, 0, Color.BLACK));
        phoneText.setBackground(null);
        phoneText.setForeground(Color.white);
        phoneText.setFont(Oswald);

        phoneText.addFocusListener(new FocusListener() {
            @Override
            public void focusGained(FocusEvent e) {
                if (phoneText.getText().equals("876-111-1111")) {
                    phoneText.setText(null);
                }
            }

            @Override
            public void focusLost(FocusEvent e) {

                if (phoneText.getText().equals("876-   -    ")) {
                    phoneText.setText("876-111-1111");

                }

            }

        });

        userText = new JTextField(25);
        userText.setText("User First Name");
        userText.setBounds(125, 310, 250, uih);
        userText.setBorder(BorderFactory.createMatteBorder(0, 0, 1, 0, Color.BLACK));
        userText.setBackground(null);
        userText.setForeground(Color.white);
        userText.setFont(Oswald);

        userText.addFocusListener(new FocusListener() {
            @Override
            public void focusGained(FocusEvent e) {
                if (userText.getText().equals("User First Name")) {
                    userText.setText(null);
                }

            }

            @Override
            public void focusLost(FocusEvent e) {
                if (userText.getText().equals("")) {
                    userText.setText("User First Name");

                }

            }

        });

        passwordText = new JPasswordField("Password");
        passwordText.setBounds(125, 370, 250, uih);
        passwordText.setVisible(true);
        passwordText.setBorder(BorderFactory.createMatteBorder(0, 0, 1, 0, Color.BLACK));
        passwordText.setBackground(null);
        passwordText.setForeground(Color.white);
        passwordText.setFont(Oswald);
        passwordText.addFocusListener(new FocusListener() {
            @Override
            public void focusGained(FocusEvent e) {
                char[] passwordchar = passwordText.getPassword();
                String password = String.valueOf(passwordchar);
                if (password.equals("Password")) {
                    passwordText.setText(null);
                }
            }

            @Override
            public void focusLost(FocusEvent e) {
                char[] passwordchar = passwordText.getPassword();
                String password = String.valueOf(passwordchar);
                if (password.equals("")) {
                    passwordText.setText("Password");
                }

            }

        });

        loginPanel.add(phoneText);
        loginPanel.add(userText);
        loginPanel.add(passwordText);

    }

    public void addAdminLogin() {

        Font oswald_Small = new Font("Oswald", Font.TYPE1_FONT, 10);

        adminSwap = new JTextArea("Are You and admin user at either service providor?");
        adminSwap.setEditable(false);
        adminSwap.setBounds(adminsetX, adminsetY, 200, 150);

        // Sets text area so that the words wrap properly in the box
        adminSwap.setLineWrap(true);
        adminSwap.setWrapStyleWord(true);
        // Sets the text box to the style of the ui
        adminSwap.setOpaque(false);
        adminSwap.setFont(oswald_Small);
        adminSwap.setForeground(Color.white);
        adminSwap.setBackground(null);
        adminSwap.setBorder(javax.swing.BorderFactory.createEmptyBorder());

        // Adds Functionality to the button
        adminButton = new JToggleButton("<HTML><U>Admin</U></HTML>");
        adminButton.setBounds(adminoffsetX, adminoffsetY, 100, uih);
        // Sets the button to the style of the ui
        adminButton.setForeground(Color.white);
        adminButton.setFont(oswald_Small);
        adminButton.setBorderPainted(false);
        adminButton.setContentAreaFilled(false);
        adminButton.setFocusPainted(false);
        adminButton.setOpaque(false);

        // Adds Functionality to the button
        adminButton.addItemListener(new ItemListener() {
            @Override
            public void itemStateChanged(ItemEvent itemEvent) {

                adminPressed(itemEvent);

            }
        });

        // Creates Combo Bocx to select Service Providor account
        providerBox = new JComboBox<String>(providors);
        // Sets the ComboBox to the style of the ui
        providerBox.setBounds(125, 270, 250, uih);
        providerBox.setVisible(false);
        providerBox.setOpaque(false);
        providerBox.setBackground(null);
        providerBox.setForeground(Color.white);
        providerBox.setFont(oswald_Small);
        // providerBox.setBorder(new RoundedBorder(25));

        // Adds the previous attributes to the login panel
        loginPanel.add(providerBox);
        loginPanel.add(adminButton);
        loginPanel.add(adminSwap);

    }

    public void addExitButton() {

        exitButton = new JButton("X");
        exitButton.setForeground(Color.white);
        exitButton.setBounds(455, 0, 45, 45);
        exitButton.setLayout(new GridLayout(1, 1));
        exitButton.addActionListener(new ActionListener() {

            @Override
            public void actionPerformed(ActionEvent e) {
                System.exit(0);
            }

        });
        exitButton.setBorderPainted(false);
        exitButton.setContentAreaFilled(false);
        exitButton.setFocusPainted(false);
        exitButton.setOpaque(false);
        loginPanel.add(exitButton);

    }

    public void addLoginButton() {

        loginButton = new JButton("Login");
        loginButton.setBounds(125, 425, 100, uih);
        loginPanel.add(loginButton);
        loginButton.setOpaque(false);
        loginButton.setFocusPainted(false);
        loginButton.setContentAreaFilled(false);
        loginButton.setForeground(Color.white);
        loginButton.setFont(Oswald);
        loginButton.setBorder(new RoundedBorder(25));
        loginButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {

                if (panelStatus == customer) {

                    String username = userText.getText();
                    String phone = phoneText.getText();
                    char[] passwordchar = passwordText.getPassword();
                    String password = String.valueOf(passwordchar);

                    adminGui word = new adminGui();
                    word.saveUserToFile(username, password, phone);
                    

                    System.out.println("Customer Information\n" + "Username:\t" + username + "\n" + "Password:\t"
                            + password + "\n" + "Phone Number:\t" + phone);

                } else if (panelStatus == admin) {

                    int providor = providerBox.getSelectedIndex();
                    char[] passwordchar = passwordText.getPassword();
                    String password = String.valueOf(passwordchar);

                    switch (providor) {
                    case 0:

                        if (password.equals("TheBiggerBetterNetwork2021")) {
                            System.out.println("Successfully Logged in!");
                        } else {
                            System.out.println("Incorrect Password!");
                        }

                        System.out.println(
                                "Admin Information\n" + "Providor:\t" + "Digicel" + "\n" + "Password:\t" + password);

                        break;

                    case 1:

                        if (password.equals("TheWayIFlow2021")) {
                            System.out.println("Successfully Logged in!");
                        } else {
                            System.out.println("Incorrect Password!");
                        }

                        System.out.println(
                                "Admin Information\n" + "Providor:\t" + "Flow" + "\n" + "Password:\t" + password);

                        break;

                    default:
                        break;
                    }

                }

            }

        });

    }

    protected void adminPressed(ItemEvent itemEvent) {

        int state = itemEvent.getStateChange();

        if (state == ItemEvent.SELECTED) {
            phoneText.setVisible(false);
            userText.setVisible(false);
            passwordText.setBounds(125, 350, 250, uih);
            providerBox.setVisible(true);

            passwordText.setText("Password");

            picLabel.setIcon(server);

            // passwordText.setVisible(true);
            // Welcome.setVisible(false);
            Welcome.setText("Admin Panel");
            adminSwap.setText("Are you a Customer at either service providor?");
            adminButton.setText("<HTML><U>User</U></HTML>");

            panelStatus = admin;
        } else {
            phoneText.setVisible(true);
            userText.setVisible(true);
            passwordText.setBounds(125, 370, 250, uih);
            providerBox.setVisible(false);

            passwordText.setText("Password");

            picLabel.setIcon(tech);

            // passwordText.setVisible(false);
            // Welcome.setVisible(true);
            Welcome.setText("Welcome!");
            adminButton.setText("<HTML><U>Admin</U></HTML>");
            adminSwap.setText("Are you an Admin user at either service providor?");

            panelStatus = customer;
        }

    }

    class RoundedJTextField extends JTextField {
        private Shape shape;

        public RoundedJTextField(int size) {
            super(size);
            setOpaque(false);
        }

        protected void paintComponent(Graphics g) {
            g.setColor(getBackground());
            g.fillRoundRect(0, 0, getWidth() - 1, getHeight() - 1, 15, 15);
            super.paintComponent(g);
        }

        protected void paintBorder(Graphics g) {
            g.setColor(getForeground());
            g.drawRoundRect(0, 0, getWidth() - 1, getHeight() - 1, 15, 15);
        }

        public boolean contains(int x, int y) {
            if (shape == null || !shape.getBounds().equals(getBounds())) {
                shape = new RoundRectangle2D.Float(0, 0, getWidth() - 1, getHeight() - 1, 15, 15);
            }
            return shape.contains(x, y);
        }
    }

    private static class RoundedBorder implements Border {

        private int radius;

        RoundedBorder(int radius) {
            this.radius = radius;
        }

        public Insets getBorderInsets(Component c) {
            return new Insets(this.radius + 1, this.radius + 1, this.radius + 2, this.radius);
        }

        public boolean isBorderOpaque() {
            return true;
        }

        public void paintBorder(Component c, Graphics g, int x, int y, int width, int height) {
            g.drawRoundRect(x, y, width - 1, height - 1, radius, radius);
        }
    }

}
