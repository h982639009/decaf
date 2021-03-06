/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "grammer.y" /* yacc.c:339  */

   #include "AST_Node.h"
   #include "stdio.h"
   struct Node * programBlock;

#line 72 "grammer.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "grammer.tab.h".  */
#ifndef YY_YY_GRAMMER_TAB_H_INCLUDED
# define YY_YY_GRAMMER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BOOL = 258,
    BREAK = 259,
    CLASS = 260,
    ELSE = 261,
    EXTENDS = 262,
    FOR = 263,
    IF = 264,
    INT = 265,
    NEW = 266,
    KEY_NULL = 267,
    RETURN = 268,
    STRING = 269,
    THIS = 270,
    VOID = 271,
    WHILE = 272,
    STATIC = 273,
    PRINT = 274,
    READINTEGER = 275,
    READLINE = 276,
    INSTANCEOF = 277,
    TRUE = 278,
    FALSE = 279,
    IDENTIFIER = 280,
    INTCONSTANT = 281,
    STRINGCONSTANT = 282,
    LE_OP = 283,
    GE_OP = 284,
    EQ_OP = 285,
    NE_OP = 286,
    AND_OP = 287,
    OR_OP = 288,
    DOUBLE = 289,
    COMMENT = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 7 "grammer.y" /* yacc.c:355  */

    struct Node * ast;
    int intv;
    double dbv;
    char * str;

#line 155 "grammer.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 170 "grammer.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   480

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,     2,     2,    43,     2,     2,
      47,    48,    41,    39,    51,    40,    46,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
      37,    36,    38,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,    53,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    53,    57,    61,    65,    66,    67,    68,
      69,    70,    74,    75,    79,    80,    85,    86,    90,    94,
      96,   100,   101,   105,   106,   109,   110,   114,   118,   119,
     123,   124,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   141,   142,   143,   147,   148,   152,   153,   157,   161,
     162,   166,   167,   171,   172,   177,   182,   187,   189,   194,
     195,   199,   203,   207,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     240,   241,   242,   243,   244
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOL", "BREAK", "CLASS", "ELSE",
  "EXTENDS", "FOR", "IF", "INT", "NEW", "KEY_NULL", "RETURN", "STRING",
  "THIS", "VOID", "WHILE", "STATIC", "PRINT", "READINTEGER", "READLINE",
  "INSTANCEOF", "TRUE", "FALSE", "IDENTIFIER", "INTCONSTANT",
  "STRINGCONSTANT", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "DOUBLE", "COMMENT", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'['", "']'", "'.'", "'('", "')'", "'!'", "';'", "','", "'{'",
  "'}'", "$accept", "program", "variabledef", "variable", "type",
  "formals", "formals_not_empty", "functiondef", "functiondef_not_static",
  "classdef", "fields", "fields_not_empty", "field", "stmtblock", "stmts",
  "stmts_not_empty", "stmt", "simple_stmt", "lvalue", "lvalue_dot",
  "lvalue_access", "call", "actuals", "actuals_not_empty", "for_stmt",
  "while_stmt", "if_stmt", "return_stmt", "break_stmt", "print_stmt",
  "bool_expr", "expr", "constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,    61,    60,    62,    43,
      45,    42,    47,    37,    91,    93,    46,    40,    41,    33,
      59,    44,   123,   125
};
# endif

#define YYPACT_NINF -86

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-86)))

#define YYTABLE_NINF -44

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,   -22,     9,   -86,    -2,   -86,   -86,    -5,    74,   -21,
     -86,    21,   -86,   -86,   -86,    90,   -86,   -11,   -19,   -86,
     -86,    -6,    74,   -86,    74,   -86,   -15,   -86,   -86,    11,
       8,   -86,   -86,     7,    11,    90,   -86,   -86,   -86,   -14,
      33,    31,   -86,    34,    90,   137,   -86,   -86,   -86,    12,
      38,    73,   -86,   281,   -86,    47,    49,    50,    54,    56,
     -86,   -86,    58,   -86,   -86,   281,   220,   281,   -86,   -86,
      55,   137,   -86,    59,    75,   -86,   -86,     6,   -86,   -86,
     -86,    60,    70,    71,   377,   -86,   281,   281,    76,    78,
     -86,   -86,   377,   281,   281,    77,    79,   281,   281,    -9,
     101,   318,   -86,   -86,   -86,   -86,   281,   -86,   -86,   -86,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   103,    80,    81,   377,    87,   250,
      88,     4,   377,   -86,   -86,   294,    95,    93,   107,   -86,
     377,   126,   126,   434,   434,   415,   396,   126,   126,    -9,
      -9,    -4,    -4,    -4,   339,    91,   281,   187,   -86,   358,
     187,   -86,   281,   146,   -86,   281,   -86,   281,   123,   168,
     -86,   -86,   377,   127,   -86,   128,   281,   187,   -86,   -86,
     130,   -86,   187,   -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     3,     0,    22,     0,
       7,     0,     6,     8,     9,     0,    25,     0,     0,    26,
      17,     0,    21,    24,    22,    10,     0,    16,     4,     5,
       0,    20,    23,     0,     0,    13,    11,    19,    15,     0,
       0,    12,     5,     0,     0,    29,    18,    14,    61,     0,
       0,     0,    94,    59,    66,     0,     0,     0,     0,     0,
      91,    92,    47,    90,    93,     0,     0,     0,    32,    40,
       0,    28,    31,     0,    65,    44,    45,    67,    36,    35,
      34,     0,     0,     0,     0,    64,    43,     0,     0,     0,
      65,    67,    60,     0,     0,     0,     0,     0,    52,    74,
       0,     0,    83,    27,    30,    33,     0,    38,    37,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,     0,     0,
       0,     0,    54,    84,    85,     0,     0,    51,     0,    68,
      41,    76,    78,    79,    80,    81,    82,    75,    77,    69,
      70,    71,    72,    73,     0,    46,     0,    43,    86,     0,
      43,    62,     0,     0,    50,     0,    48,    52,     0,    57,
      87,    56,    53,     0,    89,     0,    43,    43,    88,    49,
       0,    58,    43,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,    -1,    -8,     0,   -86,   -86,   -86,   164,   178,
     157,   -86,   160,   140,   -86,   -86,   -58,   -85,   -45,   -86,
     -86,   -43,    18,    94,   -86,   -86,   -86,   -86,   -86,   -86,
     -81,   -49,   -86
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    68,    17,    39,    40,    41,    19,    20,     3,
      21,    22,    23,    69,    70,    71,    72,    73,    90,    75,
      76,    91,   136,   137,    78,    79,    80,    81,    82,    83,
     126,    84,    85
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      74,   125,    77,     4,    92,     7,    29,    16,    18,     5,
      34,    42,   130,   104,     1,    26,    99,   101,   102,     1,
       9,    16,    18,    16,    18,    30,    74,    38,    77,    30,
      30,    24,   120,   121,   122,   123,    47,   124,   127,    28,
     123,    74,   124,    77,   127,   132,    25,    31,   135,   132,
       8,    89,   161,    36,   -42,   162,   -42,   140,    35,    86,
      37,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   168,    10,    10,    11,    11,
     159,    43,    44,    12,    12,    87,    45,    13,    13,    14,
      14,   180,    15,    10,    93,    11,    94,    95,    88,   169,
      12,    96,   171,    97,    13,    98,    14,   127,   103,   105,
     107,   106,    74,   172,    77,    74,   174,    77,   132,   181,
     108,   109,   129,   128,   183,   133,   138,   134,   155,   157,
     156,    74,    74,    77,    77,   158,   160,    74,   167,    77,
      10,    48,    11,   164,   162,    49,    50,    12,    51,    52,
      53,    13,    54,    14,    55,   165,    56,    57,    58,    59,
      60,    61,    62,    63,    64,   118,   119,   120,   121,   122,
     123,   173,   124,   176,   177,   178,   179,    65,   182,    27,
       6,    33,    32,    46,    66,   175,    67,   -43,   131,    45,
      10,    48,    11,     0,     0,    49,    50,    12,    51,    52,
      53,    13,    54,    14,    55,     0,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,     0,    65,     0,     0,
       0,    51,    52,     0,    66,    54,    67,     0,     0,    45,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    51,    52,     0,     0,    54,     0,    66,     0,    67,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,     0,    51,    52,     0,    36,    54,    66,     0,    67,
       0,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,   110,   111,   112,   113,   114,   115,    66,     0,
      67,   116,   117,   118,   119,   120,   121,   122,   123,     0,
     124,     0,     0,     0,     0,   163,   110,   111,   112,   113,
     114,   115,     0,     0,     0,   116,   117,   118,   119,   120,
     121,   122,   123,     0,   124,     0,   139,   110,   111,   112,
     113,   114,   115,     0,     0,     0,   116,   117,   118,   119,
     120,   121,   122,   123,   166,   124,   110,   111,   112,   113,
     114,   115,     0,     0,     0,   116,   117,   118,   119,   120,
     121,   122,   123,   170,   124,   110,   111,   112,   113,   114,
     115,     0,     0,     0,   116,   117,   118,   119,   120,   121,
     122,   123,     0,   124,   110,   111,   112,   113,   114,     0,
       0,     0,     0,   116,   117,   118,   119,   120,   121,   122,
     123,     0,   124,   110,   111,   112,   113,     0,     0,     0,
       0,     0,   116,   117,   118,   119,   120,   121,   122,   123,
       0,   124,   110,   111,     0,     0,     0,     0,     0,     0,
       0,   116,   117,   118,   119,   120,   121,   122,   123,     0,
     124
};

static const yytype_int16 yycheck[] =
{
      45,    86,    45,    25,    53,     7,    25,     8,     8,     0,
      25,    25,    93,    71,     5,    15,    65,    66,    67,     5,
      25,    22,    22,    24,    24,    44,    71,    35,    71,    44,
      44,    52,    41,    42,    43,    44,    44,    46,    87,    50,
      44,    86,    46,    86,    93,    94,    25,    53,    97,    98,
      52,    51,    48,    45,    48,    51,    50,   106,    47,    47,
      53,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   156,     3,     3,     5,     5,
     129,    48,    51,    10,    10,    47,    52,    14,    14,    16,
      16,   176,    18,     3,    47,     5,    47,    47,    25,   157,
      10,    47,   160,    47,    14,    47,    16,   156,    53,    50,
      50,    36,   157,   162,   157,   160,   165,   160,   167,   177,
      50,    50,    44,    47,   182,    48,    25,    48,    25,    48,
      50,   176,   177,   176,   177,    48,    48,   182,    47,   182,
       3,     4,     5,    48,    51,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    48,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    39,    40,    41,    42,    43,
      44,    25,    46,    50,     6,    48,    48,    40,    48,    15,
       2,    24,    22,    43,    47,   167,    49,    50,    94,    52,
       3,     4,     5,    -1,    -1,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,    -1,    40,    -1,    -1,
      -1,    11,    12,    -1,    47,    15,    49,    -1,    -1,    52,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    11,    12,    -1,    -1,    15,    -1,    47,    -1,    49,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    11,    12,    -1,    45,    15,    47,    -1,    49,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    28,    29,    30,    31,    32,    33,    47,    -1,
      49,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    51,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    -1,    48,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    28,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    55,    63,    25,     0,    63,     7,    52,    25,
       3,     5,    10,    14,    16,    18,    56,    57,    58,    61,
      62,    64,    65,    66,    52,    25,    58,    62,    50,    25,
      44,    53,    66,    64,    25,    47,    45,    53,    57,    58,
      59,    60,    25,    48,    51,    52,    67,    57,     4,     8,
       9,    11,    12,    13,    15,    17,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    40,    47,    49,    56,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    78,    79,
      80,    81,    82,    83,    85,    86,    47,    47,    25,    58,
      72,    75,    85,    47,    47,    47,    47,    47,    47,    85,
       5,    85,    85,    53,    70,    50,    36,    50,    50,    50,
      28,    29,    30,    31,    32,    33,    37,    38,    39,    40,
      41,    42,    43,    44,    46,    71,    84,    85,    47,    44,
      84,    77,    85,    48,    48,    85,    76,    77,    25,    48,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    25,    50,    48,    48,    85,
      48,    48,    51,    51,    48,    48,    45,    47,    84,    70,
      45,    70,    85,    25,    85,    76,    50,     6,    48,    48,
      71,    70,    48,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    57,    58,    58,    58,    58,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    68,    68,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    71,    71,    71,    72,    72,    73,    73,    74,    75,
      75,    76,    76,    77,    77,    78,    79,    80,    80,    81,
      81,    82,    83,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    86,    86,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     1,     1,     1,     1,
       2,     3,     1,     0,     3,     1,     2,     1,     6,     7,
       5,     1,     0,     2,     1,     1,     1,     3,     1,     0,
       2,     1,     1,     2,     1,     1,     1,     2,     2,     2,
       1,     3,     1,     0,     1,     1,     3,     1,     4,     6,
       4,     1,     0,     3,     1,     9,     5,     5,     7,     1,
       2,     1,     4,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     4,     5,     6,     5,
       1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 52 "grammer.y" /* yacc.c:1646  */
    {programBlock= newNode(); (yyval.ast)=programBlock; addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"program");}
#line 1439 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 53 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-1].ast));}
#line 1445 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 57 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode(); addChild((yyval.ast),(yyvsp[-1].ast)); setType((yyval.ast),"variabledef"); }
#line 1451 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 61 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-1].ast));setType((yyval.ast),"variable");}
#line 1457 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 65 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"int");}
#line 1463 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 66 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"bool");}
#line 1469 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 67 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"string");}
#line 1475 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 68 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"void");printf("\ncon:%s\n",((yyval.ast))->typeName);}
#line 1481 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 69 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"class");}
#line 1487 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 70 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));}
#line 1493 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 74 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"formals");printf("\ncon:%s\n",((yyval.ast))->typeName);}
#line 1499 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 75 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"formals");}
#line 1505 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 79 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[0].ast));}
#line 1511 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 80 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"formals_not_empty");}
#line 1517 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 85 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"functiondef");}
#line 1523 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 86 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"functiondef");}
#line 1529 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-5].ast));addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"functiondef_not_static");printf("\ncon:%d\n",((yyval.ast))->childnum);if(((yyval.ast))->list==NULL)printf("\ncon:NULL POINTER\n");}
#line 1535 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 95 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-1].ast));setType((yyval.ast),"classdef_externs");}
#line 1541 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 96 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-1].ast));setType((yyval.ast),"classdef");}
#line 1547 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 100 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"fields");}
#line 1553 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 101 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"fields");}
#line 1559 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 105 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"fields_not_empty");}
#line 1565 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 106 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"fields_not_empty");}
#line 1571 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 109 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"field");}
#line 1577 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 110 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"field");}
#line 1583 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 114 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-1].ast));setType((yyval.ast),"stmtblock");printf("\ncon:%s\n",((yyval.ast))->typeName);}
#line 1589 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 118 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"stmts");}
#line 1595 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 119 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"stmts");}
#line 1601 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 123 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[0].ast));}
#line 1607 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 124 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"classdef");}
#line 1613 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 129 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"stmt");}
#line 1619 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-1].ast));setType((yyval.ast),"stmt");}
#line 1625 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 131 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"stmt");}
#line 1631 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 132 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"stmt");}
#line 1637 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 133 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"stmt");}
#line 1643 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 134 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-1].ast));setType((yyval.ast),"stmt");}
#line 1649 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 135 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-1].ast));setType((yyval.ast),"stmt");}
#line 1655 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 136 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-1].ast));setType((yyval.ast),"stmt");}
#line 1661 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 137 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"stmt");}
#line 1667 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 141 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"simple_stmt");}
#line 1673 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 142 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"simple_stmt");}
#line 1679 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 143 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"simple_stmt");}
#line 1685 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 147 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"lvalue");}
#line 1691 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 148 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"lvalue");}
#line 1697 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 152 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-2].ast));setType((yyval.ast),"lvalue_dot");}
#line 1703 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 153 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"lvalue_dot");}
#line 1709 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 157 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-3].ast));addChild((yyval.ast),(yyvsp[-1].ast));setType((yyval.ast),"lvalue_access");}
#line 1715 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 161 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-5].ast));addChild((yyval.ast),(yyvsp[-1].ast));setType((yyval.ast),"call");}
#line 1721 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 162 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-1].ast));setType((yyval.ast),"call");}
#line 1727 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 166 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"actuals");}
#line 1733 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 167 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"actuals");}
#line 1739 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 171 "grammer.y" /* yacc.c:1646  */
    {;addChild((yyval.ast),(yyvsp[0].ast));}
#line 1745 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 172 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"actuals_not_empty");}
#line 1751 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 178 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-6].ast));addChild((yyval.ast),(yyvsp[-4].ast));addChild((yyval.ast),(yyvsp[-2].ast));setType((yyval.ast),"for_stmt");}
#line 1757 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 183 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"while_stmt");}
#line 1763 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 188 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"if_stmt");}
#line 1769 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 190 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-4].ast));addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"if_stmt");}
#line 1775 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 194 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"return_stmt");}
#line 1781 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 195 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"return_stmt");}
#line 1787 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 199 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"break_stmt");}
#line 1793 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 203 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[-1].ast));setType((yyval.ast),"print_stmt");}
#line 1799 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 207 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"bool_expr");}
#line 1805 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 211 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"expr");}
#line 1811 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 212 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"expr");}
#line 1817 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 213 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"expr_this");}
#line 1823 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 214 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();addChild((yyval.ast),(yyvsp[0].ast));setType((yyval.ast),"expr");}
#line 1829 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 215 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-1].ast));}
#line 1835 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 216 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1841 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 217 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1847 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 218 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1853 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 219 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1859 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 220 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1865 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 221 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[0].ast));}
#line 1871 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 222 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1877 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 223 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1883 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 224 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1889 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 225 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1895 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 226 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1901 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 227 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1907 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 228 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1913 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 229 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-2].ast));addChild((yyval.ast),(yyvsp[0].ast));}
#line 1919 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 230 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[0].ast));}
#line 1925 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 231 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"expr_readI");}
#line 1931 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 232 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"expr_readL");}
#line 1937 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 233 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"expr_new");}
#line 1943 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 234 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-3].ast));addChild((yyval.ast),(yyvsp[-1].ast));}
#line 1949 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 235 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[-3].ast));}
#line 1955 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 236 "grammer.y" /* yacc.c:1646  */
    {addChild((yyval.ast),(yyvsp[0].ast));}
#line 1961 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 240 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"constant_I");}
#line 1967 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 241 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"constant_T");}
#line 1973 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 242 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"constant_F");}
#line 1979 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 243 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"constant_S");}
#line 1985 "grammer.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 244 "grammer.y" /* yacc.c:1646  */
    {(yyval.ast)=newNode();setType((yyval.ast),"constant_N");}
#line 1991 "grammer.tab.c" /* yacc.c:1646  */
    break;


#line 1995 "grammer.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 247 "grammer.y" /* yacc.c:1906  */

#include <stdio.h>

/*extern char yytext[];
extern int column;

yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}*/

void setYYin();


extern int yylineno;
extern int wordCount;
main(){
   //yyin=fopen("test.c","r");
   setYYin();
   yyparse();
   if(programBlock!=NULL){
       printf("\nprogramBlock\n");
   }
   print(programBlock);
}        

yyerror(s) char *s; {
    fprintf( stderr, "line %d, wordCount %d: %s\n", yylineno,wordCount,s );
}

int yywrap() 
{ 
   return 1; 
} 
