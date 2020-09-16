/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 9 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "include/sym_table.h"

#define TRACE_ENABLED true

// Number of rows in Hash table for symbol and constant tables
#define MAX_NODES 1000

void yyerror(const char * s);

symbol_node_t *symbol_table[MAX_NODES];
symbol_node_t *constant_table[MAX_NODES];

extern char *yytext;
extern int yylineno;
extern int nest_level;

char datatype[100];
char paramList[100];

#line 91 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    SIGNED = 258,
    UNSIGNED = 259,
    LONG = 260,
    SHORT = 261,
    SWITCH = 262,
    BREAK = 263,
    CONTINUE = 264,
    CASE = 265,
    DEFAULT = 266,
    RETURN = 267,
    FOR = 268,
    WHILE = 269,
    DO = 270,
    IF = 271,
    ELSE = 272,
    CONSTANT_INTEGER = 273,
    CONSTANT_FLOAT = 274,
    CONSTANT_STRING = 275,
    CONSTANT_CHAR = 276,
    INCLUDE = 277,
    DEFINE = 278,
    IDENTIFIER = 279,
    INT = 280,
    CHAR = 281,
    FLOAT = 282,
    DOUBLE = 283,
    VOID = 284,
    ADD_ASSIGN = 285,
    SUB_ASSIGN = 286,
    MUL_ASSIGN = 287,
    DIV_ASSIGN = 288,
    MOD_ASSIGN = 289,
    LEFT_ASSIGN = 290,
    RIGHT_ASSIGN = 291,
    AND_ASSIGN = 292,
    XOR_ASSIGN = 293,
    OR_ASSIGN = 294,
    LOGIC_AND = 295,
    LOGIC_OR = 296,
    NOT = 297,
    INCREMENT_OPERATOR = 298,
    DECREMENT_OPERATOR = 299,
    LESSER_EQUAL = 300,
    GREATER_EQUAL = 301,
    DOUBLE_EQUAL = 302,
    NOT_EQUAL = 303,
    LESSER_THAN = 304,
    GREATER_THAN = 305
  };
#endif
/* Tokens.  */
#define SIGNED 258
#define UNSIGNED 259
#define LONG 260
#define SHORT 261
#define SWITCH 262
#define BREAK 263
#define CONTINUE 264
#define CASE 265
#define DEFAULT 266
#define RETURN 267
#define FOR 268
#define WHILE 269
#define DO 270
#define IF 271
#define ELSE 272
#define CONSTANT_INTEGER 273
#define CONSTANT_FLOAT 274
#define CONSTANT_STRING 275
#define CONSTANT_CHAR 276
#define INCLUDE 277
#define DEFINE 278
#define IDENTIFIER 279
#define INT 280
#define CHAR 281
#define FLOAT 282
#define DOUBLE 283
#define VOID 284
#define ADD_ASSIGN 285
#define SUB_ASSIGN 286
#define MUL_ASSIGN 287
#define DIV_ASSIGN 288
#define MOD_ASSIGN 289
#define LEFT_ASSIGN 290
#define RIGHT_ASSIGN 291
#define AND_ASSIGN 292
#define XOR_ASSIGN 293
#define OR_ASSIGN 294
#define LOGIC_AND 295
#define LOGIC_OR 296
#define NOT 297
#define INCREMENT_OPERATOR 298
#define DECREMENT_OPERATOR 299
#define LESSER_EQUAL 300
#define GREATER_EQUAL 301
#define DOUBLE_EQUAL 302
#define NOT_EQUAL 303
#define LESSER_THAN 304
#define GREATER_THAN 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 49 "parser.y" /* yacc.c:355  */

	char char_ptr[100];

#line 235 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 252 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   488

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  242

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    67,     2,    56,    58,     2,
      61,    62,    54,    52,    60,    53,    68,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    59,
       2,    30,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,     2,    66,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    70,    70,    71,    72,    73,    74,    75,    76,    77,
      81,    85,    86,    87,    94,    95,    96,   103,   104,   108,
     116,   117,   118,   119,   120,   121,   122,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   138,   138,   138,   138,
     142,   147,   152,   161,   166,   171,   176,   185,   195,   196,
     197,   201,   202,   203,   207,   208,   209,   210,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   229,
     233,   234,   235,   236,   240,   241,   243,   244,   245,   246,
     247,   251,   252,   253,   257,   258,   259,   260,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   283,   287,   288,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   305,   309,   310,
     314,   319,   320,   324,   325,   329,   330,   331,   335,   339,
     340,   344,   347,   350,   351,   352
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SIGNED", "UNSIGNED", "LONG", "SHORT",
  "SWITCH", "BREAK", "CONTINUE", "CASE", "DEFAULT", "RETURN", "FOR",
  "WHILE", "DO", "IF", "ELSE", "CONSTANT_INTEGER", "CONSTANT_FLOAT",
  "CONSTANT_STRING", "CONSTANT_CHAR", "INCLUDE", "DEFINE", "IDENTIFIER",
  "INT", "CHAR", "FLOAT", "DOUBLE", "VOID", "'='", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "LOGIC_AND",
  "LOGIC_OR", "NOT", "INCREMENT_OPERATOR", "DECREMENT_OPERATOR",
  "LESSER_EQUAL", "GREATER_EQUAL", "DOUBLE_EQUAL", "NOT_EQUAL",
  "LESSER_THAN", "GREATER_THAN", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "'&'", "';'", "','", "'('", "')'", "'['", "']'", "'{'", "'}'", "'#'",
  "'.'", "$accept", "Begin", "Declaration", "Identifier_List",
  "Function_Definition", "Formal_Param_List", "Type", "Modifiers",
  "Array_Notation", "Define_Assign", "Param_List", "Assignment",
  "Assignment_Operator", "Expression", "Logical_Expression",
  "Relational_Expression", "Additive_Expression",
  "Multiplicative_Expression", "Primary", "Compound_Statement",
  "Statement_List", "Statement", "Return_Statement", "While_Statement",
  "Do_While_Statement", "For_Statement", "If_Statement", "Else_Statement",
  "Function_Call", "Include_Statement", "Include", "Define",
  "Define_Statement", YY_NULLPTR
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
      61,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,    43,    45,    42,    47,    37,    94,    38,    59,
      44,    40,    41,    91,    93,   123,   125,    35,    46
};
# endif

#define YYPACT_NINF -212

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-212)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      35,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
       8,     4,    35,    35,    13,   134,  -212,    35,    35,  -212,
     -34,    11,  -212,  -212,  -212,   380,    27,    30,     7,   220,
      10,  -212,  -212,  -212,  -212,  -212,  -212,    44,   129,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
      20,   359,   146,   293,   391,    12,  -212,    20,   293,    20,
     -26,  -212,  -212,  -212,   425,  -212,    17,    34,  -212,  -212,
    -212,  -212,    36,   337,    58,    69,   337,   337,    72,    79,
     293,    52,  -212,    56,    31,   272,    48,   127,  -212,  -212,
    -212,    20,   293,   293,   293,  -212,  -212,  -212,  -212,   110,
      51,   -43,   112,    82,  -212,  -212,   293,   272,  -212,  -212,
    -212,  -212,    76,    12,    83,    93,   105,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
    -212,   107,  -212,   113,   123,   281,  -212,   359,   -37,   359,
      94,   119,  -212,  -212,   293,   272,   272,    48,    48,    48,
      48,    48,    48,   127,   127,  -212,  -212,  -212,   124,   130,
    -212,   133,   135,   293,   142,   144,    51,   148,    74,   187,
    -212,  -212,    20,   436,   153,  -212,   147,   281,  -212,  -212,
    -212,  -212,  -212,  -212,   359,  -212,  -212,   293,   150,   293,
     293,  -212,  -212,   156,   348,   293,   203,   293,   293,    92,
     293,  -212,  -212,  -212,  -212,  -212,  -212,   155,   164,  -212,
     161,   167,   174,   178,  -212,   293,  -212,  -212,  -212,   293,
     218,   293,   218,  -212,   182,  -212,  -212,   186,   232,   232,
     348,   202,   218,  -212,  -212,   211,  -212,  -212,  -212,   218,
    -212,  -212
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    39,    38,    37,    36,    27,    30,    28,    31,    29,
       0,     0,     6,     8,     0,     0,   131,     2,     5,   132,
       0,     0,     1,     7,     9,    15,     0,     0,     0,    11,
      18,    32,    35,    33,    34,     3,     4,     0,     0,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       0,    26,     0,     0,    16,     0,    10,     0,     0,     0,
       0,   134,   135,   133,    15,    12,     0,     0,    89,    90,
      92,    91,    93,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    98,     0,    69,    70,    74,    81,    84,    99,
      48,     0,     0,     0,     0,    14,    50,    17,   129,     0,
       0,    20,     0,    22,   101,   103,    53,    73,   100,   102,
      97,    96,    94,    95,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,    49,     0,     0,   106,    19,    26,    21,    26,
       0,    51,    88,    44,     0,    71,    72,    78,    77,    79,
      80,    76,    75,    82,    83,    85,    86,    87,    42,    43,
     130,     0,     0,     0,     0,     0,     0,     0,    93,     0,
     116,   108,     0,    98,     0,    57,     0,   106,   112,   107,
     113,   109,   110,    23,    26,    25,   128,    53,     0,     0,
       0,   114,   115,     0,     0,     0,     0,     0,     0,    94,
       0,   111,   104,   105,    24,    52,    45,     0,     0,   117,
       0,     0,     0,     0,    54,     0,    56,    46,    47,     0,
       0,     0,     0,    55,     0,   119,   118,     0,   127,   127,
       0,     0,     0,   124,   123,     0,   120,   125,   126,     0,
     122,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -212,    77,   184,   -35,  -212,  -129,     1,  -212,   -14,  -212,
      87,  -165,   -27,   -46,  -212,   -68,   145,   -39,   -44,  -163,
      98,  -211,  -212,  -212,  -212,  -212,  -212,    49,  -212,  -212,
    -212,  -212,  -212
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,   171,    28,    13,    66,   172,    15,    82,    30,
     140,   174,    53,   141,    84,    85,    86,    87,    88,   136,
     176,   177,   178,   179,   180,   181,   182,   233,    89,    16,
      17,    18,    19
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      29,    14,    58,   196,    22,   107,    83,    90,   183,   226,
     185,   229,    96,    14,    14,    65,    37,   137,    14,    14,
      52,   238,    95,   184,    97,    98,    92,    93,   241,   210,
      20,    21,   110,   111,   114,    38,    29,    25,     1,     2,
       3,     4,    99,    29,    64,    29,   131,   132,   133,   145,
     146,    54,    67,   103,    55,   204,   130,   225,   101,   228,
       5,     6,     7,     8,     9,   235,    56,    26,    60,   237,
      59,    27,   117,   118,    26,    94,   240,    29,    27,   100,
     104,   105,   108,   155,   156,   157,   153,   154,   102,    23,
      24,   175,    27,   109,    35,    36,   112,   106,   188,    52,
     125,   126,    10,   113,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   115,   135,   193,   104,   105,
     116,   173,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,   175,   134,   106,   138,    52,    67,    92,
      67,   198,   139,   207,   208,   142,   200,    61,    62,   211,
     175,   213,   214,    63,   216,    92,   186,   143,    29,    31,
      32,    33,    34,   173,    68,    69,    70,    71,   144,   223,
      72,   158,   215,   224,   160,   227,   175,   159,   175,   187,
     173,   127,   128,   129,    12,    67,   175,   189,   175,    73,
      74,    75,   191,   190,   192,   175,    12,    12,    76,    77,
      78,    12,    12,   194,    79,   195,   173,    80,   173,   197,
      81,   199,   201,   202,   206,   209,   173,   212,   173,   217,
     219,     1,     2,     3,     4,   173,   161,   162,   218,   220,
     163,   164,   165,   166,   167,   221,    68,    69,    70,    71,
     222,   230,   168,     5,     6,     7,     8,     9,   231,   232,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,   236,    74,    75,   147,   148,   149,   150,   151,   152,
      76,    77,   169,   239,   205,   203,    79,   170,   234,    80,
      57,     0,     0,   135,     1,     2,     3,     4,     0,   161,
     162,     0,     0,   163,   164,   165,   166,   167,     0,    68,
      69,    70,    71,     0,     0,   168,     5,     6,     7,     8,
       9,    68,    69,    70,    71,     0,     0,    72,   119,   120,
     121,   122,   123,   124,     0,    74,    75,     0,     0,     0,
       0,     0,     0,    76,    77,   169,    73,    74,    75,    79,
     170,     0,    80,     0,     0,    76,    77,    78,     0,     0,
       0,    79,     0,     0,    80,    68,    69,    70,    71,     0,
       0,    72,     1,     2,     3,     4,    68,    69,    70,    71,
       0,     0,   168,     0,     0,     0,     0,     0,     0,     0,
       0,    74,    75,     0,     5,     6,     7,     8,     9,    76,
      77,    78,    74,    75,     0,    79,     0,     0,    80,     0,
      76,    77,   169,     0,     0,     0,    79,     0,     0,    80,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,     0,    52,     0,     0,     0,     0,     0,     0,
       0,    91,     0,     0,    92,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,    52
};

static const yytype_int16 yycheck[] =
{
      14,     0,    29,   166,     0,    73,    52,    53,   137,   220,
     139,   222,    58,    12,    13,    50,    50,    60,    17,    18,
      63,   232,    57,    60,    59,    51,    63,    54,   239,   194,
      22,    23,    76,    77,    80,    24,    50,    24,     3,     4,
       5,     6,    68,    57,    24,    59,    92,    93,    94,   117,
     118,    24,    51,    67,    24,   184,    91,   220,    24,   222,
      25,    26,    27,    28,    29,   230,    59,    54,    24,   232,
      60,    58,    41,    42,    54,    63,   239,    91,    58,    62,
      44,    45,    24,   127,   128,   129,   125,   126,    54,    12,
      13,   135,    58,    24,    17,    18,    24,    61,   144,    63,
      52,    53,    67,    24,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    63,    65,   163,    44,    45,
      64,   135,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   177,    24,    61,    24,    63,   137,    63,
     139,   168,    60,   189,   190,    62,   173,    18,    19,   195,
     194,   197,   198,    24,   200,    63,    62,    64,   172,    25,
      26,    27,    28,   177,    18,    19,    20,    21,    63,   215,
      24,    64,   199,   219,    51,   221,   220,    64,   222,    60,
     194,    54,    55,    56,     0,   184,   230,    63,   232,    43,
      44,    45,    59,    63,    59,   239,    12,    13,    52,    53,
      54,    17,    18,    61,    58,    61,   220,    61,   222,    61,
      64,    24,    59,    66,    64,    59,   230,    14,   232,    64,
      59,     3,     4,     5,     6,   239,     8,     9,    64,    62,
      12,    13,    14,    15,    16,    61,    18,    19,    20,    21,
      62,    59,    24,    25,    26,    27,    28,    29,    62,    17,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    59,    44,    45,   119,   120,   121,   122,   123,   124,
      52,    53,    54,    62,   187,   177,    58,    59,   229,    61,
      60,    -1,    -1,    65,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    28,
      29,    18,    19,    20,    21,    -1,    -1,    24,    46,    47,
      48,    49,    50,    51,    -1,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    43,    44,    45,    58,
      59,    -1,    61,    -1,    -1,    52,    53,    54,    -1,    -1,
      -1,    58,    -1,    -1,    61,    18,    19,    20,    21,    -1,
      -1,    24,     3,     4,     5,     6,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    25,    26,    27,    28,    29,    52,
      53,    54,    44,    45,    -1,    58,    -1,    -1,    61,    -1,
      52,    53,    54,    -1,    -1,    -1,    58,    -1,    -1,    61,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    25,    26,    27,    28,    29,
      67,    70,    71,    73,    75,    76,    98,    99,   100,   101,
      22,    23,     0,    70,    70,    24,    54,    58,    72,    77,
      78,    25,    26,    27,    28,    70,    70,    50,    24,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      60,    61,    63,    81,    24,    24,    59,    60,    81,    60,
      24,    18,    19,    24,    24,    72,    74,    75,    18,    19,
      20,    21,    24,    43,    44,    45,    52,    53,    54,    58,
      61,    64,    77,    82,    83,    84,    85,    86,    87,    97,
      82,    60,    63,    81,    63,    72,    82,    72,    51,    68,
      62,    24,    54,    77,    44,    45,    61,    84,    24,    24,
      87,    87,    24,    24,    82,    63,    64,    41,    42,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      72,    82,    82,    82,    24,    65,    88,    60,    24,    60,
      79,    82,    62,    64,    63,    84,    84,    85,    85,    85,
      85,    85,    85,    86,    86,    87,    87,    87,    64,    64,
      51,     8,     9,    12,    13,    14,    15,    16,    24,    54,
      59,    71,    75,    77,    80,    87,    89,    90,    91,    92,
      93,    94,    95,    74,    60,    74,    62,    60,    82,    63,
      63,    59,    59,    82,    61,    61,    88,    61,    81,    24,
      81,    59,    66,    89,    74,    79,    64,    82,    82,    59,
      80,    82,    14,    82,    82,    81,    82,    64,    64,    59,
      62,    61,    62,    82,    82,    88,    90,    82,    88,    90,
      59,    62,    17,    96,    96,    80,    59,    88,    90,    62,
      88,    90
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    72,    72,    72,    72,    72,    72,    72,    72,    73,
      74,    74,    74,    74,    74,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    78,    78,
      78,    79,    79,    79,    80,    80,    80,    80,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      83,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      84,    85,    85,    85,    86,    86,    86,    86,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    92,    92,
      93,    94,    94,    95,    95,    96,    96,    96,    97,    98,
      98,    99,   100,   101,   101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     2,     1,     2,
       3,     1,     3,     4,     3,     1,     2,     3,     1,     6,
       2,     3,     2,     4,     5,     4,     0,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       3,     4,     5,     5,     5,     7,     8,     8,     3,     4,
       3,     1,     3,     0,     3,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       2,     2,     2,     2,     3,     2,     0,     1,     1,     1,
       1,     2,     1,     1,     2,     2,     1,     3,     5,     5,
       7,     9,     9,     6,     6,     2,     2,     0,     4,     5,
       7,     1,     1,     4,     4,     4
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
        case 12:
#line 86 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[-2].char_ptr),datatype,yylineno, 0, "", nest_level);}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 87 "parser.y" /* yacc.c:1646  */
    {
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                Insert(symbol_table,(yyvsp[-2].char_ptr),datatype,yylineno, 0, "", nest_level);
                                                datatype[len] = '\0';
                                            }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 95 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[0].char_ptr),datatype,yylineno, 0, "", nest_level);}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 96 "parser.y" /* yacc.c:1646  */
    {
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                Insert(symbol_table,(yyvsp[0].char_ptr),datatype,yylineno, 0, "", nest_level);
                                                datatype[len] = '\0';
                                            }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 108 "parser.y" /* yacc.c:1646  */
    {                            
                                                                            char funcType[100] = "Function: ";
                                                                            strcat(funcType, datatype);
                                                                            Insert(symbol_table,(yyvsp[-4].char_ptr), funcType, yylineno, 0, "", nest_level);
                                                                        }
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 116 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[0].char_ptr),datatype,yylineno, 0, "Params", nest_level);trace("Formal_Param_List Rule 1\n");}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 117 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[0].char_ptr),datatype,yylineno, 0, "Params", nest_level);trace("Formal_Param_List Rule 2\n");}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 118 "parser.y" /* yacc.c:1646  */
    {trace("Formal_Param_List Rule 3\n");}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 119 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[-2].char_ptr),datatype,yylineno, 0, "Params", nest_level);trace("Formal_Param_List Rule 4\n");}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 120 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[-2].char_ptr),datatype,yylineno, 0, "Params", nest_level);trace("Formal_Param_List Rule 5\n");}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 121 "parser.y" /* yacc.c:1646  */
    {trace("Formal_Param_List Rule 6\n");}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 126 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 127 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 128 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 129 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 130 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 131 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 132 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 133 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 134 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 142 "parser.y" /* yacc.c:1646  */
    {   
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table, (yyvsp[-2].char_ptr), arrayType, yylineno, 1, "", nest_level);
                                    }
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 147 "parser.y" /* yacc.c:1646  */
    {   
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,(yyvsp[-3].char_ptr), arrayType, yylineno, 1, "", nest_level);
                                    }
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 152 "parser.y" /* yacc.c:1646  */
    {   
                                        int len = strlen(datatype);
                                        datatype[len] = '*';
                                        datatype[len +1] = '\0';                                
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,(yyvsp[-3].char_ptr), arrayType,yylineno, 1, "", nest_level);
                                        datatype[len] = '\0';
                                    }
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 161 "parser.y" /* yacc.c:1646  */
    {
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,(yyvsp[-3].char_ptr), arrayType,yylineno, 1, "", nest_level);
                                    }
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 166 "parser.y" /* yacc.c:1646  */
    {   
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table, (yyvsp[-4].char_ptr), arrayType, yylineno, 2, "", nest_level);
                                    }
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 171 "parser.y" /* yacc.c:1646  */
    {   
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,(yyvsp[-6].char_ptr), arrayType, yylineno, 2, "", nest_level);
                                    }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 176 "parser.y" /* yacc.c:1646  */
    {   
                                        int len = strlen(datatype);
                                        datatype[len] = '*';
                                        datatype[len +1] = '\0';                                
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,(yyvsp[-6].char_ptr), arrayType,yylineno, 2, "", nest_level);
                                        datatype[len] = '\0';
                                    }
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 185 "parser.y" /* yacc.c:1646  */
    {
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,(yyvsp[-6].char_ptr), arrayType,yylineno, 2, "", nest_level);
                                    }
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 195 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[-2].char_ptr),datatype,yylineno, 0, "", nest_level);trace("Define_Assign Rule 1\n");}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 196 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[-2].char_ptr),datatype,yylineno, 0, "", nest_level);}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 207 "parser.y" /* yacc.c:1646  */
    {trace("Assignment Rule 1\n");}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 265 "parser.y" /* yacc.c:1646  */
    {Insert(constant_table, (yyvsp[0].char_ptr), "int", yylineno, 0, "", nest_level); trace("CONSTANT_INTEGER\n");}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 266 "parser.y" /* yacc.c:1646  */
    {Insert(constant_table, (yyvsp[0].char_ptr), "float", yylineno, 0, "", nest_level); trace("CONSTANT_FLOAT\n");}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 267 "parser.y" /* yacc.c:1646  */
    {Insert(constant_table, (yyvsp[0].char_ptr), "char", yylineno, 0, "", nest_level); trace("CONSTANT_CHAR\n");}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 268 "parser.y" /* yacc.c:1646  */
    {Insert(constant_table, (yyvsp[0].char_ptr), "string", yylineno, 0, "", nest_level); trace("CONSTANT_STRING\n");}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 269 "parser.y" /* yacc.c:1646  */
    {trace("Primary Identifier\n");}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 270 "parser.y" /* yacc.c:1646  */
    {trace("Pointer Identifier\n");}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 271 "parser.y" /* yacc.c:1646  */
    {trace("Address of Identifier\n");}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 305 "parser.y" /* yacc.c:1646  */
    {trace("Return_Statement Call\n");}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 335 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table, (yyvsp[-3].char_ptr), "Function", yylineno, 0, "", nest_level);trace("Function Call\n");}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1854 "y.tab.c" /* yacc.c:1646  */
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
#line 356 "parser.y" /* yacc.c:1906  */



inline void trace(char *s){
    if(TRACE_ENABLED)
        fprintf(stderr,"%-20.20s%20.20s%20d\n", s, yytext, yylineno);
}

int main()
{
    Initialize(symbol_table);
    Initialize(constant_table);

    if(!yyparse()){
        Display(symbol_table, "Symbol Table");
        Display(constant_table, "Constant Table");
        printf("\n\n Parsing complete  ✔ \n\n");    
    }
    else
        printf("\nParsing failed ✘ \n\n");
    
    Free(symbol_table);
    Free(constant_table);

    return 0;
}
         
void yyerror(const char *s) {
	printf("%d : %s %s\n", yylineno, s, yytext );
}
