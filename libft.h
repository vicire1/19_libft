char	**ft_strsplit(char const *s, char c); //a faire
char	*ft_itoa(int n); //a faire
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strcpy(char* dst, const char* src);
char	*ft_strdup(const char *s); //a faire
char	*ft_strjoin(char const *s1, char const *s2); //a faire
char	*ft_strmap(char const *s, char (*f)(char)); //a faire
char	*ft_strmapi(charconst*s,char (*f)(unsigned int, char)); //a faire
char	*ft_strncat(char *dest, char *src, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strnew(size_t size); //a faire
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strsub(char const *s, unsigned int start, size_t len); //a faire
char	*ft_strtrim(char const *s); //a faire
int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void s1[.n], const void s2[.n], size_t n); //a faire
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size); //a faire
void	*ft_memalloc(size_t size); //a faire
void	*ft_memccpy(void dest[restrict .n], const void src[restrict .n], int c, size_t n); //a faire
void	*ft_memchr(const void s[.n], int c, size_t n); //a faire
void	*ft_memcpy(void dest[restrict .n], const void src[restrict .n], size_t n); //a faire
void	*ft_memmove(void dest[.n], const void src[.n], size_t n); //a faire
void	*ft_memset(void s, int c, size_t n); //a faire
void	ft_bzero(void s, size_t n); //a faire
void	ft_memdel(void **ap); //a faire
void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putstr(char const *s);
void	ft_strclr(char *s);
void	ft_strdel(char **as); //a faire
void	ft_striter(char *s, void (*f)(char *)); //a faire
void	ft_striteri(char*s,void(*f)(unsigned int, char *)); //a faire