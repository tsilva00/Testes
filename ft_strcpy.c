char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while(s1[1] != '\0')
    {
        s2[i]=s1[i];
        i++;
    }
    s1[i] = '\0';
    return(s2);
}
