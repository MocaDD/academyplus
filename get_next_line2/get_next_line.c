
int     get_next_line(int const fd, char **line)
{
    static  char    *stock = NULL;
    char            *bn;
    int             ret;
    
    if (!stock && (stock = (char*)malloc(sizeof(*stock))) == NULL ||  !line 
                || fd < 0 || BUFF_SIZE < 0)
        return (1);
    
    
    
    
    
}