int main()
		{
			    char code [4] = {'z','z','z','z'};
			    char input[25];
			    int result;
			    char p1 [13];
			    char p2 [13];
			 
				    cout << setw(52) << "Welcome to Open Email Exchange. \n";
			    cout << setw (53) << "---------------------------------- \n";
			    cout << " - This program accepts ALL email addresses. You will need to provide \n";
			    cout << setw(37) << "an email address and password. \n \n";
			 
				    cout << "Please enter your email address: ";
			    cin.getline ( input , 50 );
			 
				    //check the email's size
				    result = strlen(input);
		
				    email (input , result , code );
			 
				    return 0;
			}
			 
			bool email (char string[] , int size , char code [] )
		{
			    bool valid = false;
			     
				    //Contain an @ symbol that appears before any periods
				    if ( string [size-4] == '.')
				    {
					        valid = true;
					 
						             for (int i = size-5 ; i < size ; i --)
						             {
							                 if ( !string[i] == '@')
								                 {
								                     code [0] = 'F';
									                     cout << "You do not have an @ symbol (must be before any periods) \n";
									                 }
							                 else
								                     code [0] = 'T';
							             }
					    }
			 
				         
				    //Contain period followed by three letters
				    if (string[size-4] == '.')
				    {
					        valid = true;
					        for (int i = size -3 ; i < size ; i ++)
						        {
							            if ( !isalpha(string[i]))
								             {
									                valid = false;
									                code [1] = 'F';
									                cout << "You must have a period followed by three letters. (i.e. webster.edu.) \n";
									             }
							            else
								            {
									                valid = true;
								62	                code [1] = 'P';
								63	            }
						64	        }
				65	     }
			 
				    //Contain at least three characters between @ and period
				 
				    return valid;
			}
