typedef struct {
    zend_object std;
} int_object;

PHP_MINIT_FUNCTION(myext);
PHP_METHOD( MyInt, __construct );
