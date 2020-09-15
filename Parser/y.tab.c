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

char datatype[100];


#line 90 "y.tab.c" /* yacc.c:339  */

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
#line 47 "parser.y" /* yacc.c:355  */

	char char_ptr[100];

#line 234 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 251 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   501

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

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
       0,    68,    68,    69,    70,    71,    72,    73,    74,    75,
      79,    83,    84,    85,    92,    93,    94,   101,   102,   106,
     114,   115,   116,   117,   118,   119,   120,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   136,   136,   136,   136,
     140,   145,   150,   159,   169,   170,   171,   175,   176,   177,
     181,   182,   183,   184,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   203,   207,   208,   209,   210,
     214,   215,   217,   218,   219,   220,   221,   225,   226,   227,
     231,   232,   233,   234,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     257,   261,   262,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   279,   283,   284,   288,   293,   294,   298,
     299,   303,   304,   305,   309,   313,   314,   318,   321,   324,
     325,   326
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

#define YYPACT_NINF -189

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-189)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      63,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
      53,     6,    63,    63,   -20,   173,  -189,    63,    63,  -189,
     -33,    -4,  -189,  -189,  -189,   380,     0,     8,   -24,   209,
     -21,  -189,  -189,  -189,  -189,  -189,  -189,    23,    97,  -189,
    -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,  -189,
     -12,   107,   282,   329,   416,    30,  -189,   -12,   329,   -12,
      19,  -189,  -189,  -189,   427,  -189,    18,     2,  -189,  -189,
    -189,  -189,    84,   340,    58,    90,   340,   340,    94,   100,
     329,  -189,  -189,    62,    44,   122,    54,    17,  -189,  -189,
    -189,   -12,   329,   329,   329,  -189,  -189,  -189,  -189,   117,
      88,   -35,   130,    71,  -189,  -189,   329,   122,  -189,  -189,
    -189,  -189,    95,    30,   102,  -189,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,  -189,
     119,  -189,   132,   151,   270,  -189,   107,   -19,   107,   141,
     121,  -189,   122,   122,    54,    54,    54,    54,    54,    54,
      17,    17,  -189,  -189,  -189,  -189,  -189,  -189,   145,   147,
     329,   148,   157,    88,   163,    64,   184,  -189,  -189,   -12,
     461,   170,  -189,   164,   270,  -189,  -189,  -189,  -189,  -189,
    -189,   107,  -189,  -189,   329,  -189,  -189,   178,   384,   329,
     224,   329,   329,   154,   329,  -189,  -189,  -189,  -189,  -189,
    -189,   191,   192,   194,   195,  -189,   329,  -189,   329,   207,
     329,   207,  -189,   197,  -189,  -189,   196,   236,   236,   384,
     203,   207,  -189,  -189,   201,  -189,  -189,  -189,   207,  -189,
    -189
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    39,    38,    37,    36,    27,    30,    28,    31,    29,
       0,     0,     6,     8,     0,     0,   127,     2,     5,   128,
       0,     0,     1,     7,     9,    15,     0,     0,     0,    11,
      18,    32,    35,    33,    34,     3,     4,     0,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,    26,     0,     0,    16,     0,    10,     0,     0,     0,
       0,   130,   131,   129,    15,    12,     0,     0,    85,    86,
      88,    87,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    94,     0,    65,    66,    70,    77,    80,    95,
      44,     0,     0,     0,     0,    14,    46,    17,   125,     0,
       0,    20,     0,    22,    97,    99,    49,    69,    96,    98,
      93,    92,    90,    91,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,    45,     0,     0,   102,    19,    26,    21,    26,     0,
      47,    84,    67,    68,    74,    73,    75,    76,    72,    71,
      78,    79,    81,    82,    83,    42,    43,   126,     0,     0,
       0,     0,     0,     0,     0,    89,     0,   112,   104,     0,
      94,     0,    53,     0,   102,   108,   103,   109,   105,   106,
      23,    26,    25,   124,    49,   110,   111,     0,     0,     0,
       0,     0,     0,    90,     0,   107,   100,   101,    24,    48,
     113,     0,     0,     0,     0,    50,     0,    52,     0,     0,
       0,     0,    51,     0,   115,   114,     0,   123,   123,     0,
       0,     0,   120,   119,     0,   116,   121,   122,     0,   118,
     117
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -189,    66,   144,   -28,  -189,  -133,     1,  -189,   -14,  -189,
      80,  -158,   -27,   -43,  -189,   -62,    57,    -2,   -69,  -147,
      93,  -188,  -189,  -189,  -189,  -189,  -189,    52,  -189,  -189,
    -189,  -189,  -189
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,   168,    28,    13,    66,   169,    15,    82,    30,
     139,   171,    53,   140,    84,    85,    86,    87,    88,   135,
     173,   174,   175,   176,   177,   178,   179,   222,    89,    16,
      17,    18,    19
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      29,    14,    58,   180,    25,   182,    22,   110,   111,    83,
      90,   107,    64,    14,    14,    96,   190,    37,    14,    14,
      38,   215,    65,   218,    54,   136,   101,    93,    52,    95,
     201,    97,    55,   227,    26,    56,    29,   114,    27,    59,
     230,   181,    26,    29,    92,    29,    27,    60,   198,   130,
     131,   132,    67,   103,   142,   143,   102,   152,   153,   154,
      27,   224,   214,   129,   217,   172,     1,     2,     3,     4,
      98,   126,   127,   128,   226,    20,    21,    29,    23,    24,
     100,   229,   108,    35,    36,   116,   117,    99,     5,     6,
       7,     8,     9,    94,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   172,   124,   125,   104,   105,
       1,     2,     3,     4,   109,    61,    62,   187,   112,   172,
     170,    63,   150,   151,   113,   106,   115,    52,   104,   105,
      10,   138,     5,     6,     7,     8,     9,    67,   192,    67,
     172,   133,   172,   194,    12,   106,   202,    52,   204,   205,
     172,   207,   172,   134,   137,    29,    12,    12,    92,   172,
     170,    12,    12,   212,   141,   213,   206,   216,   118,   119,
     120,   121,   122,   123,   170,   144,   145,   146,   147,   148,
     149,   184,    67,   155,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   170,   156,   170,    31,    32,
      33,    34,   157,   183,   185,   170,   186,   170,   193,   188,
       1,     2,     3,     4,   170,   158,   159,    92,   189,   160,
     161,   162,   163,   164,   191,    68,    69,    70,    71,   195,
     196,   165,     5,     6,     7,     8,     9,   200,   203,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     208,    74,    75,   221,   209,   210,   219,   211,   220,    76,
      77,   166,   225,   228,   199,    79,   167,   197,    80,    57,
     223,     0,   134,     1,     2,     3,     4,     0,   158,   159,
       0,     0,   160,   161,   162,   163,   164,     0,    68,    69,
      70,    71,     0,     0,   165,     5,     6,     7,     8,     9,
      68,    69,    70,    71,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,    74,    75,     0,     0,     0,     0,
       0,     0,    76,    77,   166,    73,    74,    75,    79,   167,
       0,    80,     0,     0,    76,    77,    78,     0,     0,     0,
      79,     0,     0,    80,     0,     0,    81,    68,    69,    70,
      71,     0,     0,    72,     0,     0,     0,     0,    68,    69,
      70,    71,     0,     0,    72,     0,     0,     0,     0,     0,
       0,     0,    73,    74,    75,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    74,    75,     0,    79,     0,     0,
      80,     0,    76,    77,    78,     0,     0,     0,    79,     0,
       0,    80,    68,    69,    70,    71,     0,     0,   165,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,     0,     0,     0,     0,    74,    75,
       0,     0,     0,     0,     0,     0,    76,    77,   166,     0,
      50,    51,    79,    52,     0,    80,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,    91,     0,     0,    92,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
      52,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49
};

static const yytype_int16 yycheck[] =
{
      14,     0,    29,   136,    24,   138,     0,    76,    77,    52,
      53,    73,    24,    12,    13,    58,   163,    50,    17,    18,
      24,   209,    50,   211,    24,    60,    24,    54,    63,    57,
     188,    59,    24,   221,    54,    59,    50,    80,    58,    60,
     228,    60,    54,    57,    63,    59,    58,    24,   181,    92,
      93,    94,    51,    67,   116,   117,    54,   126,   127,   128,
      58,   219,   209,    91,   211,   134,     3,     4,     5,     6,
      51,    54,    55,    56,   221,    22,    23,    91,    12,    13,
      62,   228,    24,    17,    18,    41,    42,    68,    25,    26,
      27,    28,    29,    63,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,   174,    52,    53,    44,    45,
       3,     4,     5,     6,    24,    18,    19,   160,    24,   188,
     134,    24,   124,   125,    24,    61,    64,    63,    44,    45,
      67,    60,    25,    26,    27,    28,    29,   136,   165,   138,
     209,    24,   211,   170,     0,    61,   189,    63,   191,   192,
     219,   194,   221,    65,    24,   169,    12,    13,    63,   228,
     174,    17,    18,   206,    62,   208,   193,   210,    46,    47,
      48,    49,    50,    51,   188,   118,   119,   120,   121,   122,
     123,    60,   181,    64,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,   209,    64,   211,    25,    26,
      27,    28,    51,    62,    59,   219,    59,   221,    24,    61,
       3,     4,     5,     6,   228,     8,     9,    63,    61,    12,
      13,    14,    15,    16,    61,    18,    19,    20,    21,    59,
      66,    24,    25,    26,    27,    28,    29,    59,    14,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      59,    44,    45,    17,    62,    61,    59,    62,    62,    52,
      53,    54,    59,    62,   184,    58,    59,   174,    61,    60,
     218,    -1,    65,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    12,    13,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    27,    28,    29,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    43,    44,    45,    58,    59,
      -1,    61,    -1,    -1,    52,    53,    54,    -1,    -1,    -1,
      58,    -1,    -1,    61,    -1,    -1,    64,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    44,    45,    -1,    58,    -1,    -1,
      61,    -1,    52,    53,    54,    -1,    -1,    -1,    58,    -1,
      -1,    61,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    -1,
      60,    61,    58,    63,    -1,    61,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40
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
      87,    87,    24,    24,    82,    64,    41,    42,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    72,
      82,    82,    82,    24,    65,    88,    60,    24,    60,    79,
      82,    62,    84,    84,    85,    85,    85,    85,    85,    85,
      86,    86,    87,    87,    87,    64,    64,    51,     8,     9,
      12,    13,    14,    15,    16,    24,    54,    59,    71,    75,
      77,    80,    87,    89,    90,    91,    92,    93,    94,    95,
      74,    60,    74,    62,    60,    59,    59,    82,    61,    61,
      88,    61,    81,    24,    81,    59,    66,    89,    74,    79,
      59,    80,    82,    14,    82,    82,    81,    82,    59,    62,
      61,    62,    82,    82,    88,    90,    82,    88,    90,    59,
      62,    17,    96,    96,    80,    59,    88,    90,    62,    88,
      90
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    72,    72,    72,    72,    72,    72,    72,    72,    73,
      74,    74,    74,    74,    74,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    76,    76,    76,    76,
      77,    77,    77,    77,    78,    78,    78,    79,    79,    79,
      80,    80,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    83,    83,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      86,    86,    86,    86,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    89,    89,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    91,    92,    92,    93,    94,    94,    95,
      95,    96,    96,    96,    97,    98,    98,    99,   100,   101,
     101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     2,     1,     2,
       3,     1,     3,     4,     3,     1,     2,     3,     1,     6,
       2,     3,     2,     4,     5,     4,     0,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       3,     4,     5,     5,     3,     4,     3,     1,     3,     0,
       3,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       1,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     2,     2,     2,     2,
       3,     2,     0,     1,     1,     1,     1,     2,     1,     1,
       2,     2,     1,     3,     5,     5,     7,     9,     9,     6,
       6,     2,     2,     0,     4,     5,     7,     1,     1,     4,
       4,     4
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
#line 84 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[-2].char_ptr),datatype,yylineno, false);}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 85 "parser.y" /* yacc.c:1646  */
    {
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                Insert(symbol_table,(yyvsp[-2].char_ptr),datatype,yylineno, false);
                                                datatype[len] = '\0';
                                            }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 93 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[0].char_ptr),datatype,yylineno, false);}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 94 "parser.y" /* yacc.c:1646  */
    {
                                                int len = strlen(datatype);
                                                datatype[len] = '*';
                                                datatype[len +1] = '\0';
                                                Insert(symbol_table,(yyvsp[0].char_ptr),datatype,yylineno, false);
                                                datatype[len] = '\0';
                                            }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 106 "parser.y" /* yacc.c:1646  */
    {                            
                                                                            char funcType[100] = "Function: ";
                                                                            strcat(funcType, datatype);
                                                                            Insert(symbol_table,(yyvsp[-4].char_ptr), funcType, yylineno, false);
                                                                        }
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 114 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[0].char_ptr),datatype,yylineno, false);trace("Formal_Param_List Rule 1\n");}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 115 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[0].char_ptr),datatype,yylineno, false);trace("Formal_Param_List Rule 2\n");}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 116 "parser.y" /* yacc.c:1646  */
    {trace("Formal_Param_List Rule 3\n");}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 117 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[-2].char_ptr),datatype,yylineno, false);trace("Formal_Param_List Rule 4\n");}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 118 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[-2].char_ptr),datatype,yylineno, false);trace("Formal_Param_List Rule 5\n");}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 119 "parser.y" /* yacc.c:1646  */
    {trace("Formal_Param_List Rule 6\n");}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 124 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 125 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 126 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 127 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 128 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 129 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 131 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 132 "parser.y" /* yacc.c:1646  */
    {strcpy(datatype, (yyvsp[0].char_ptr));}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 140 "parser.y" /* yacc.c:1646  */
    {   
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table, (yyvsp[-2].char_ptr), arrayType, yylineno, true);
                                    }
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 145 "parser.y" /* yacc.c:1646  */
    {   
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,(yyvsp[-3].char_ptr), arrayType, yylineno, true);
                                    }
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 150 "parser.y" /* yacc.c:1646  */
    {   
                                        int len = strlen(datatype);
                                        datatype[len] = '*';
                                        datatype[len +1] = '\0';                                
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,(yyvsp[-3].char_ptr), arrayType,yylineno, true);
                                        datatype[len] = '\0';
                                    }
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 159 "parser.y" /* yacc.c:1646  */
    {
                                        char arrayType[100] = "Array: ";
                                        strcat(arrayType, datatype);
                                        Insert(symbol_table,(yyvsp[-3].char_ptr), arrayType,yylineno, true);
                                    }
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 169 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[-2].char_ptr),datatype,yylineno, false);trace("Define_Assign Rule 1\n");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 170 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table,(yyvsp[-2].char_ptr),datatype,yylineno, false);}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 181 "parser.y" /* yacc.c:1646  */
    {trace("Assignment Rule 1\n");}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 239 "parser.y" /* yacc.c:1646  */
    {Insert(constant_table, (yyvsp[0].char_ptr), "int", yylineno, false); trace("CONSTANT_INTEGER\n");}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 240 "parser.y" /* yacc.c:1646  */
    {Insert(constant_table, (yyvsp[0].char_ptr), "float", yylineno, false); trace("CONSTANT_FLOAT\n");}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 241 "parser.y" /* yacc.c:1646  */
    {Insert(constant_table, (yyvsp[0].char_ptr), "char", yylineno, false); trace("CONSTANT_CHAR\n");}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 242 "parser.y" /* yacc.c:1646  */
    {Insert(constant_table, (yyvsp[0].char_ptr), "string", yylineno, false); trace("CONSTANT_STRING\n");}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 243 "parser.y" /* yacc.c:1646  */
    {trace("Primary Identifier\n");}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 244 "parser.y" /* yacc.c:1646  */
    {trace("Pointer Identifier\n");}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 245 "parser.y" /* yacc.c:1646  */
    {trace("Address of Identifier\n");}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 279 "parser.y" /* yacc.c:1646  */
    {trace("Return_Statement Call\n");}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 309 "parser.y" /* yacc.c:1646  */
    {Insert(symbol_table, (yyvsp[-3].char_ptr), "Function", yylineno, false);trace("Function Call\n");}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1810 "y.tab.c" /* yacc.c:1646  */
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
#line 330 "parser.y" /* yacc.c:1906  */



inline void trace(char *s){
    if(TRACE_ENABLED)
        fprintf(stderr,"%-20.20s%20.20s%20d\n", s, yytext, yylineno, false);
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
