//ATM machine program using C 
#include <stdio.h>
int main()
{
    int Entered_pin, attempt = 0, flag, entered_OTP, amount, yes_no;

    char customer_name0[] = "SHUBHAM SINGH";  // Record Part
    char customer_name1[] = "MAHEK JAIN";     // Record part
    char customer_name2[] = "RHYSHA KACHARI"; // Record Part
    char customer_name3[] = "MD. HAMID";      // Record Part
    char customer_name4[] = "MOHIT SINGH";    // Record Part

    char customer_phone_number0[] = "8002130634"; // Record Part
    char customer_phone_number1[] = "7067880448"; // Record Part
    char customer_phone_number2[] = "7723832254"; // Record Part
    char customer_phone_number3[] = "7635042517"; // Record Part
    char customer_phone_number4[] = "9953007153"; // Record Part

    int otp[] = {1123, 1234, 2345, 3456, 4567};

    int pin[] = {1123, 1234, 2345, 3456, 4567};                      // Record part
    float Available_Balance[] = {12000, 20000, 3000000000, 40000, 10000}; // Record part

    int total_money_in_atm = 10000; // Record part

    printf("\n");
    printf("________________________________________________________('_')  WELCOME TO ATM SERVICE ('_')_______________________________________________________\n");
    printf("\n");
    printf("\n");

    printf("Please enter your pin: ");
    scanf("%d", &Entered_pin);
    printf("\n");

    for (int i = 0; attempt < 3; i++)
    {
        if (flag == (-1))
        {
            printf("Please try again: ");
            scanf("%d", &Entered_pin);
            printf("\n");
        }

        if (Entered_pin == pin[0])
        {
            printf("Hi %s  ('_') \n", customer_name0);
            flag = 0;
            break;
        }
        else if (Entered_pin == pin[1])
        {
            printf("Hi %s  ('_') \n", customer_name1);
            flag = 1;
            break;
        }
        else if (Entered_pin == pin[2])
        {
            printf("Hi %s  ('_') \n", customer_name2);
            flag = 2;
            break;
        }
        else if (Entered_pin == pin[3])
        {
            printf("Hi %s  ('_') \n", customer_name3);
            flag = 3;
            break;
        }
        else if (Entered_pin == pin[4])
        {
            printf("Hi %s  ('_') \n", customer_name4);
            flag = 4;
            break;
        }
        else
        {
            printf("Please enter a valid pin.!! \n");
            printf("\n");
            attempt++;
            flag = -1;
        }
    }
    if (attempt == 3)
    {
        printf("You have used all your three attempts. \n");
        printf("Your session is terminated for 5 minutes, so kindly try after 5 minutes. \n");
    }
    int option;
    if ((flag == 0) || (flag == 1) || (flag == 2) || (flag == 3) || (flag == 4))
    {
        printf("What do you want, please select! \n");
        printf("======================================================================================================================\n");
        printf("\n");
        printf("1. Money Withdrawl \n");
        printf("2. Money Deposit \n");
        printf("3. Balance Enquiry \n");
        printf("4. Change PIN \n");
        printf("\n");
        printf("======================================================================================================================\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        printf("\n");

        if (option == 1)
        {
            printf("You want to withdraw money. \n");
            printf("Enter amount to be withdrawn: ");
            scanf("%d", &amount);
            if (amount < total_money_in_atm)
            {
                if (amount % 100 == 0)
                {
                    if (flag == 0)
                    {
                        if (Available_Balance[0] < amount)
                        {
                            printf("Your available balance is insufficient. \n");
                            printf("Your available balance is:  %.2f", Available_Balance[0]);
                        }
                        else
                        {
                            printf("Processing....... \n");
                            Available_Balance[0] = Available_Balance[0] - amount;
                            printf("Now your remaining balance is:  %.2f \n", Available_Balance[0]);
                            printf("\n");
                            printf("Do you want a printed receit?\n");
                            printf("Press 1[YES] and 0[NO]: ");
                            scanf("%d", &yes_no);
                            if (yes_no == 1)
                            {
                                printf("\n");
                                printf("Printing receit........\n");
                                printf("\n");
                                printf("Session OVER.");
                            }
                            else
                            {
                                printf("\n");
                                printf("Congratulations you are saving mother EARTH {'_'}.");
                            }
                        }
                    }
                    if (flag == 1)
                    {
                        if (Available_Balance[1] < amount)
                        {
                            printf("Your available balance is insufficient. \n");
                            printf("Your available balance is:  %.2f", Available_Balance[1]);
                        }
                        else
                        {
                            printf("Processing....... \n");
                            Available_Balance[1] = Available_Balance[1] - amount;
                            printf("Now your remaining balance is:  %.2f \n", Available_Balance[1]);
                            printf("\n");
                            printf("Do you want a printed receit?\n");
                            printf("Press 1[YES] and 0[NO]: ");
                            scanf("%d", &yes_no);
                            if (yes_no == 1)
                            {
                                printf("\n");
                                printf("Printing receit........\n");
                                printf("\n");
                                printf("Session OVER.");
                            }
                            else
                            {
                                printf("\n");
                                printf("Congratulations you are saving mother EARTH {'_'}.");
                            }
                        }
                    }
                    if (flag == 2)
                    {
                        if (Available_Balance[2] < amount)
                        {
                            printf("Your available balance is insufficient. \n");
                            printf("Your available balance is:  %.2f", Available_Balance[2]);
                        }
                        else
                        {
                            printf("Processing....... \n");
                            Available_Balance[2] = Available_Balance[2] - amount;
                            printf("Now your remaining balance is:  %.2f \n", Available_Balance[2]);
                            printf("\n");
                            printf("Do you want a printed receit?\n");
                            printf("Press 1[YES] and 0[NO]: ");
                            scanf("%d", &yes_no);
                            if (yes_no == 1)
                            {
                                printf("\n");
                                printf("Printing receit........\n");
                                printf("\n");
                                printf("Session OVER.");
                            }
                            else
                            {
                                printf("\n");
                                printf("Congratulations you are saving mother EARTH {'_'}.");
                            }
                        }
                    }
                    if (flag == 3)
                    {
                        if (Available_Balance[3] < amount)
                        {
                            printf("Your available balance is insufficient. \n");
                            printf("Your available balance is:  %.2f", Available_Balance[3]);
                        }
                        else
                        {
                            printf("Processing....... \n");
                            Available_Balance[3] = Available_Balance[3] - amount;
                            printf("Now your remaining balance is:  %.2f \n", Available_Balance[3]);
                            printf("\n");
                            printf("Do you want a printed receit?\n");
                            printf("Press 1[YES] and 0[NO]: ");
                            scanf("%d", &yes_no);
                            if (yes_no == 1)
                            {
                                printf("\n");
                                printf("Printing receit........\n");
                                printf("\n");
                                printf("Session OVER.");
                            }
                            else
                            {
                                printf("\n");
                                printf("Congratulations you are saving mother EARTH {'_'}.");
                            }
                        }
                    }
                    if (flag == 4)
                    {
                        if (Available_Balance[4] < amount)
                        {
                            printf("Your available balance is insufficient. \n");
                            printf("Your available balance is:  %.2f", Available_Balance[4]);
                        }
                        else
                        {
                            printf("Processing....... \n");
                            Available_Balance[4] = Available_Balance[4] - amount;
                            printf("Now your remaining balance is:  %.2f \n", Available_Balance[4]);
                            printf("\n");
                            printf("Do you want a printed receit?\n");
                            printf("Press 1[YES] and 0[NO]: ");
                            scanf("%d", &yes_no);
                            if (yes_no == 1)
                            {
                                printf("\n");
                                printf("Printing receit........\n");
                                printf("\n");
                                printf("Session OVER.");
                            }
                            else
                            {
                                printf("\n");
                                printf("Congratulations you are saving mother EARTH {'_'}.");
                            }
                        }
                    }
                }
                else
                {
                    printf("Please enter amount in the multiple of 100 RS.\n");
                    printf("Session Over.");
                }
            }
            else
            {
                printf("ATM limit ecceeded! Please go to your nearest bank to withdraw the amount \n");
                printf("\n");
                printf("Session Over.");
            }
        }
        else if (option == 2)
        {
            printf("You want to deposite money. \n");
            printf("Enter amount to be deposited: ");
            scanf("%d", &amount);
            if (flag == 0)
            {
                Available_Balance[0] = Available_Balance[0] + amount;
                printf("Your available balance is now: %.2f \n", Available_Balance[0]);
            }
            else if (flag == 1)
            {
                Available_Balance[1] = Available_Balance[1] + amount;
                printf("Your available balance is now: %.2f \n", Available_Balance[1]);
            }
            else if (flag == 2)
            {
                Available_Balance[2] = Available_Balance[2] + amount;
                printf("Your available balance is now: %.2f \n", Available_Balance[2]);
            }
            else if (flag == 3)
            {
                Available_Balance[3] = Available_Balance[3] + amount;
                printf("Your available balance is now: %.2f \n", Available_Balance[3]);
            }
            else if (flag == 4)
            {
                Available_Balance[4] = Available_Balance[4] + amount;
                printf("Your available balance is now: %.2f \n", Available_Balance[4]);
            }
        }
        else if (option == 3)
        {
            if (flag == 0)
            {
                printf("Your available balance is: %.2f", Available_Balance[0]);
                printf("\n");
                printf("Do you want a printed receit?\n");
                printf("Press 1[YES] and 0[NO]: ");
                scanf("%d", &yes_no);
                if (yes_no == 1)
                {
                    printf("\n");
                    printf("Printing receit........\n");
                    printf("\n");
                    printf("Session OVER.");
                }
                else
                {
                    printf("\n");
                    printf("Congratulations you are saving mother EARTH {'_'}.");
                }
            }
            else if (flag == 1)
            {
                printf("Your available balance is: %.2f", Available_Balance[1]);
                printf("\n");
                printf("Do you want a printed receit?\n");
                printf("Press 1[YES] and 0[NO]: ");
                scanf("%d", &yes_no);
                if (yes_no == 1)
                {
                    printf("\n");
                    printf("Printing receit........\n");
                    printf("\n");
                    printf("Session OVER.");
                }
                else
                {
                    printf("\n");
                    printf("Congratulations you are saving mother EARTH {'_'}.");
                }
            }
            else if (flag == 2)
            {
                printf("Your available balance is: %.2f", Available_Balance[2]);
                printf("\n");
                printf("Do you want a printed receit?\n");
                printf("Press 1[YES] and 0[NO]: ");
                scanf("%d", &yes_no);
                if (yes_no == 1)
                {
                    printf("\n");
                    printf("Printing receit........\n");
                    printf("\n");
                    printf("Session OVER.");
                }
                else
                {
                    printf("\n");
                    printf("Congratulations you are saving mother EARTH {'_'}.");
                }
            }
            else if (flag == 3)
            {
                printf("Your available balance is: %.2f", Available_Balance[3]);
                printf("\n");
                printf("Do you want a printed receit?\n");
                printf("Press 1[YES] and 0[NO]: ");
                scanf("%d", &yes_no);
                if (yes_no == 1)
                {
                    printf("\n");
                    printf("Printing receit........\n");
                    printf("\n");
                    printf("Session OVER.");
                }
                else
                {
                    printf("\n");
                    printf("Congratulations you are saving mother EARTH {'_'}.");
                }
            }
            else if (flag == 4)
            {
                printf("Your available balance is: %.2f", Available_Balance[4]);
                printf("\n");
                printf("Do you want a printed receit?\n");
                printf("Press 1[YES] and 0[NO]: ");
                scanf("%d", &yes_no);
                if (yes_no == 1)
                {
                    printf("\n");
                    printf("Printing receit........\n");
                    printf("\n");
                    printf("Session OVER.");
                }
                else
                {
                    printf("\n");
                    printf("Congratulations you are saving mother EARTH {'_'}.");
                }
            }
        }
        else if (option == 4)
        {
            if (flag == 0)
            {
                printf("OTP has been sent to your registered mobile number: %c%cXXXXX%c%c%c", customer_phone_number0[0], customer_phone_number0[1], customer_phone_number0[7], customer_phone_number0[8], customer_phone_number0[9]);
                printf("\n");
                printf("Enter OTP: ");
                scanf("%d", &entered_OTP);
                if (entered_OTP == otp[0])
                {
                    printf("Please enter your new pin: ");
                    scanf("%d", &pin[0]);
                    printf("Processing..... \n");
                    printf("\n");
                    printf("Your pin changed to %d and has been sent to your registered mobile number: %c%cXXXXX%c%c%c", pin[0], customer_phone_number0[0], customer_phone_number0[1], customer_phone_number0[7], customer_phone_number0[8], customer_phone_number0[9]);
                }
                else
                {
                    printf("You have entered wrong OTP. \n");
                    printf("Session Over");
                }
            }
            else if (flag == 1)
            {
                printf("OTP has been sent to your registered mobile number: %c%cXXXXX%c%c%c", customer_phone_number1[0], customer_phone_number1[1], customer_phone_number1[7], customer_phone_number1[8], customer_phone_number1[9]);
                printf("\n");
                printf("Enter OTP: ");
                scanf("%d", &entered_OTP);
                if (entered_OTP == otp[1])
                {
                    printf("Please enter your new pin: ");
                    scanf("%d", &pin[1]);
                    printf("Processing..... \n");
                    printf("\n");
                    printf("Your pin changed to %d and has been sent to your registered mobile number: %c%cXXXXX%c%c%c", pin[1], customer_phone_number1[0], customer_phone_number1[1], customer_phone_number1[7], customer_phone_number1[8], customer_phone_number1[9]);
                }
                else
                {
                    printf("You have entered wrong OTP.\n");
                    printf("Session Over");
                }
            }
            else if (flag == 2)
            {
                printf("OTP has been sent to your registered mobile number: %c%cXXXXX%c%c%c", customer_phone_number2[0], customer_phone_number2[1], customer_phone_number2[7], customer_phone_number2[8], customer_phone_number2[9]);
                printf("\n");
                printf("Enter OTP: ");
                scanf("%d", &entered_OTP);
                if (entered_OTP == otp[2])
                {
                    printf("Please enter your new pin: ");
                    scanf("%d", &pin[2]);
                    printf("Processing..... \n");
                    printf("\n");
                    printf("Your pin changed to %d and has been sent to your registered mobile number: %c%cXXXXX%c%c%c", pin[2], customer_phone_number2[0], customer_phone_number2[1], customer_phone_number2[7], customer_phone_number2[8], customer_phone_number2[9]);
                }
                else
                {
                    printf("You have entered wrong OTP.\n");
                    printf("Session Over");
                }
            }
            else if (flag == 3)
            {
                printf("OTP has been sent to your registered mobile number: %c%cXXXXX%c%c%c", customer_phone_number3[0], customer_phone_number3[1], customer_phone_number3[7], customer_phone_number3[8], customer_phone_number3[9]);
                printf("\n");
                printf("Enter OTP: ");
                scanf("%d", &entered_OTP);
                if (entered_OTP == otp[3])
                {
                    printf("Please enter your new pin: ");
                    scanf("%d", &pin[3]);
                    printf("Processing..... \n");
                    printf("\n");
                    printf("Your pin changed to %d and has been sent to your registered mobile number: %c%cXXXXX%c%c%c", pin[3], customer_phone_number3[0], customer_phone_number3[1], customer_phone_number3[7], customer_phone_number3[8], customer_phone_number3[9]);
                }
                else
                {
                    printf("You have entered wrong OTP. \n");
                    printf("Session Over");
                }
            }
            else if (flag == 4)
            {
                printf("OTP has been sent to your registered mobile number: %d%dXXXXX%d%d%d", customer_phone_number4[0], customer_phone_number4[1], customer_phone_number4[7], customer_phone_number4[8], customer_phone_number4[9]);
                printf("\n");
                printf("Enter OTP: ");
                scanf("%d", &entered_OTP);
                if (entered_OTP == otp[4])
                {
                    printf("Please enter your new pin: ");
                    scanf("%d", &pin[4]);
                    printf("Processing..... \n");
                    printf("\n");
                    printf("Your pin changed to %d and has been sent to your registered mobile number: %d%dXXXXX%d%d%d", pin[4], customer_phone_number4[0], customer_phone_number4[1], customer_phone_number4[7], customer_phone_number4[8], customer_phone_number4[9]);
                }
                else
                {
                    printf("You have entered wrong OTP.\n");
                    printf("Session Over");
                }
            }
        }

        else
        {
            printf("Please enter a valid choice. \n");
            printf("Session Over... \n");
        }
    }

    return 0;
}
