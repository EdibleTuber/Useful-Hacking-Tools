void main()
{
  char* shell =  getenv("WRAPPER");
  if (shell)
    printf("%x\n", (unsigned int)shell);
    }
