import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Gui extends JFrame {
    private JPanel Interface;
    private JTextField textField1Valor;
    private JButton button1Mat;
    private JPasswordField passwordField1;
    private JPasswordField passwordField2;
    private JLabel labelResultado;
    private JLabel labelTítulo;
    private JLabel labelUser;
    private JLabel labelFoto1;
    private JLabel labelSenha;
    private JLabel labelFoto;




    //Método Construtor
    public Gui(String title){
//Chama o construtor de JFrame
        super(title);
//Faz o programa encerrar ao fechar a janela
        this.setDefaultCloseOperation(JFrame. DISPOSE_ON_CLOSE);
//Adiciona o Panel criado para a janela
        this.setContentPane(Interface);
//Ajusta os tamanhos mínimos dos componentes
        this.pack();
        //criou a ação do butão com o listener
        JOptionPane.showMessageDialog(null,"Olá, Seja bem vindo(a) ao Empréstimo Facil ");
        button1Mat.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String valorp= (textField1Valor.getText());
                String valorSenha1=(passwordField1.getText());
                String valorSenha2=(passwordField2.getText());

                if (valorp.equals("Giulian")||valorp.equals("giulian")&&valorSenha1.equals("dexter123")
                        &&valorSenha2.equals("dexter123")&&valorSenha1.equals(valorSenha2)){
                    labelResultado.setText(valorp);
                    Gui2 frame=new Gui2("Empréstimo Fácil");
                    frame.setVisible(true);
                }
                else{
                        JOptionPane.showMessageDialog(null,"Senha incorreta, tente novamente!","ATENÇÃO",JOptionPane.WARNING_MESSAGE);

                }
            }
        });
    }
    public static void main(String[] args) {
        JFrame frame = new Gui( "Emprestímo Fácil");
        //Torna-o visível
        frame.setVisible( true);

    }

    private void createUIComponents() {
        // TODO: place custom component creation code here
    }
}
//double valorp= Double.parseDouble(textField1Valor.getText());
//                System.out.println(valorp);
//                double valormulti=valorp*3;
//                System.out.println("O triplo é "+valormulti);
//                DecimalFormat df= new DecimalFormat("0.00");
//                labelValornovo.setText(String.valueOf(valormulti));