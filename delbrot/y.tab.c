/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "delbrot/delbrot.y"

    #include <dlfcn.h>
    #include <stdarg.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "delbrot.h"
    /* prototypes to please -Wall */
    void yyerror(char *error, ...);
    int yylex();
    /* script file */
    extern FILE *yyin;
    /* debug */
    #define YYDEBUG 1

/* Line 371 of yacc.c  */
#line 84 "delbrot/y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
#ifndef YY_YY_DELBROT_Y_TAB_H_INCLUDED
# define YY_YY_DELBROT_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUM = 258,
     BOOL = 259,
     STRING = 260,
     CLIP = 261,
     TRUE = 262,
     FALSE = 263,
     CONSTANT = 264,
     IDENTIFIER = 265,
     OPTARG = 266,
     ASSIGN = 267,
     BINOP = 268,
     ADDEQ = 269,
     SUBEQ = 270,
     MULEQ = 271,
     DIVEQ = 272,
     POWEQ = 273,
     MODEQ = 274,
     CHNEQ = 275,
     CHAIN = 276,
     CNCAT = 277,
     IF = 278,
     ELSE = 279,
     TERN = 280,
     FNCT = 281,
     FNDEF = 282,
     RETURN = 283,
     DEFAULT = 284,
     OTHER = 285,
     IMPORT = 286,
     LOR = 287,
     LAND = 288,
     EQ = 289,
     NE = 290,
     GT = 291,
     LT = 292,
     GE = 293,
     LE = 294,
     IFX = 295,
     NEG = 296
   };
#endif
/* Tokens.  */
#define NUM 258
#define BOOL 259
#define STRING 260
#define CLIP 261
#define TRUE 262
#define FALSE 263
#define CONSTANT 264
#define IDENTIFIER 265
#define OPTARG 266
#define ASSIGN 267
#define BINOP 268
#define ADDEQ 269
#define SUBEQ 270
#define MULEQ 271
#define DIVEQ 272
#define POWEQ 273
#define MODEQ 274
#define CHNEQ 275
#define CHAIN 276
#define CNCAT 277
#define IF 278
#define ELSE 279
#define TERN 280
#define FNCT 281
#define FNDEF 282
#define RETURN 283
#define DEFAULT 284
#define OTHER 285
#define IMPORT 286
#define LOR 287
#define LAND 288
#define EQ 289
#define NE 290
#define GT 291
#define LT 292
#define GE 293
#define LE 294
#define IFX 295
#define NEG 296



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_DELBROT_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 232 "delbrot/y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   230

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNRULES -- Number of states.  */
#define YYNSTATES  138

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,     2,     2,    56,     2,     2,
      42,    43,    54,    52,    48,    53,    58,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    47,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,    51,    45,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    28,    34,    38,    41,    43,    46,    52,    60,    64,
      65,    67,    71,    74,    78,    80,    82,    84,    86,    88,
      92,    94,    97,    99,   101,   105,   107,   109,   111,   113,
     115,   117,   119,   121,   123,   129,   131,   135,   137,   141,
     143,   147,   149,   153,   155,   157,   159,   163,   165,   167,
     169,   171,   173,   177,   179,   181,   183,   187,   189,   191,
     193,   195,   199,   201,   205,   207,   211,   213,   216,   218,
     222,   224,   227,   229,   233,   235,   238,   241,   243,   245
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    -1,    61,    62,    -1,    63,    -1,    64,
      -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,    27,
      97,    42,    69,    43,    44,    73,    45,    -1,    29,    97,
      46,    74,    47,    -1,    28,    74,    47,    -1,    28,    47,
      -1,    47,    -1,    74,    47,    -1,    23,    42,    74,    43,
      72,    -1,    23,    42,    74,    43,    72,    24,    72,    -1,
      31,    97,    47,    -1,    -1,    70,    -1,    69,    48,    70,
      -1,    71,    97,    -1,    46,    71,    97,    -1,     3,    -1,
       4,    -1,     5,    -1,     6,    -1,    62,    -1,    44,    73,
      45,    -1,    62,    -1,    73,    62,    -1,    75,    -1,    77,
      -1,    97,    76,    75,    -1,    49,    -1,    14,    -1,    15,
      -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,    20,
      -1,    79,    -1,    79,    50,    77,    51,    78,    -1,    77,
      -1,    30,    50,    77,    -1,    80,    -1,    79,    32,    80,
      -1,    81,    -1,    80,    33,    81,    -1,    83,    -1,    81,
      82,    83,    -1,    34,    -1,    35,    -1,    85,    -1,    83,
      84,    85,    -1,    36,    -1,    37,    -1,    38,    -1,    39,
      -1,    87,    -1,    85,    86,    87,    -1,    52,    -1,    53,
      -1,    89,    -1,    87,    88,    89,    -1,    54,    -1,    55,
      -1,    56,    -1,    90,    -1,    89,    57,    90,    -1,    91,
      -1,    90,    22,    91,    -1,    92,    -1,    92,    21,    91,
      -1,    93,    -1,    93,    94,    -1,    96,    -1,    96,    58,
      96,    -1,    95,    -1,    94,    95,    -1,    97,    -1,    97,
      46,    97,    -1,    97,    -1,    53,    97,    -1,    59,    97,
      -1,    10,    -1,     9,    -1,    42,    74,    43,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    33,    37,    38,    39,    40,    41,    42,
      46,    50,    54,    55,    59,    60,    64,    65,    69,    73,
      74,    75,    79,    80,    84,    84,    84,    84,    88,    89,
      93,    94,    98,   102,   103,   107,   107,   107,   107,   107,
     107,   107,   107,   111,   112,   116,   117,   121,   122,   126,
     127,   131,   132,   136,   136,   140,   141,   145,   145,   145,
     145,   149,   150,   154,   154,   158,   159,   163,   163,   163,
     167,   168,   172,   173,   176,   177,   181,   182,   186,   187,
     191,   192,   196,   197,   201,   202,   203,   207,   208,   209
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "BOOL", "STRING", "CLIP", "TRUE",
  "FALSE", "CONSTANT", "IDENTIFIER", "OPTARG", "ASSIGN", "BINOP", "ADDEQ",
  "SUBEQ", "MULEQ", "DIVEQ", "POWEQ", "MODEQ", "CHNEQ", "CHAIN", "CNCAT",
  "IF", "ELSE", "TERN", "FNCT", "FNDEF", "RETURN", "DEFAULT", "OTHER",
  "IMPORT", "LOR", "LAND", "EQ", "NE", "GT", "LT", "GE", "LE", "IFX",
  "NEG", "'('", "')'", "'{'", "'}'", "':'", "';'", "','", "'='", "'?'",
  "'|'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "'.'", "'!'", "$accept",
  "program", "stmt", "function_declaration", "default_stmt", "return_stmt",
  "expression_stmt", "selection_stmt", "import_stmt", "param_list",
  "param", "type", "block", "stmt_list", "expr", "assignment_expr",
  "assignment_operator", "ternary_expr", "ternary_end", "boolean_or_expr",
  "boolean_and_expr", "boolean_eq_expr", "eq_operator", "boolean_rel_expr",
  "rel_operator", "arithmetic_add_expr", "add_operator",
  "arithmetic_mul_expr", "mul_operator", "arithmetic_exp_expr",
  "concat_expr", "chain_expr", "function_expr", "fn_name_expr", "arg_list",
  "function_arg", "unary_expr", "primary_expr", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    40,    41,   123,   125,    58,    59,    44,    61,
      63,   124,    43,    45,    42,    47,    37,    94,    46,    33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    62,    62,    62,    62,
      63,    64,    65,    65,    66,    66,    67,    67,    68,    69,
      69,    69,    70,    70,    71,    71,    71,    71,    72,    72,
      73,    73,    74,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    84,    84,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    88,
      89,    89,    90,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    96,    97,    97,    97
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       8,     5,     3,     2,     1,     2,     5,     7,     3,     0,
       1,     3,     2,     3,     1,     1,     1,     1,     1,     3,
       1,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     2,     1,     3,     1,     2,     2,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    88,    87,     0,     0,     0,     0,     0,
       0,    14,     0,     0,     3,     4,     5,     6,     7,     8,
       9,     0,    32,    33,    43,    47,    49,    51,    55,    61,
      65,    70,    72,    74,    76,    78,    84,     0,     0,    13,
       0,     0,     0,     0,    85,    86,    15,     0,     0,     0,
      53,    54,     0,    57,    58,    59,    60,     0,    63,    64,
       0,    67,    68,    69,     0,     0,     0,     0,    77,    80,
      82,     0,    36,    37,    38,    39,    40,    41,    42,    35,
       0,     0,    19,    12,     0,    18,    89,    48,    84,     0,
      50,    52,    56,    62,    66,    71,    73,    75,    81,     0,
      79,    34,     0,    24,    25,    26,    27,     0,     0,    20,
       0,     0,     0,    83,     0,    28,    16,     0,     0,     0,
      22,    11,     0,    45,    44,    30,     0,     0,    23,     0,
      21,     0,    29,    31,    17,     0,    46,    10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,   115,    15,    16,    17,    18,    19,    20,   108,
     109,   110,   116,   126,    21,    22,    80,    23,   124,    24,
      25,    26,    52,    27,    57,    28,    60,    29,    64,    30,
      31,    32,    33,    34,    68,    69,    35,    88
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -48
static const yytype_int16 yypact[] =
{
     -48,    15,   -48,   -48,   -48,   -28,    12,   101,    12,    12,
     122,   -48,    12,    12,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -12,   -48,   -48,   -16,     4,   -31,   134,   -26,    34,
     -18,    19,   -48,    26,    12,   -10,   181,   122,    10,   -48,
       8,    17,     9,    18,   -48,   -48,   -48,   122,   122,   122,
     -48,   -48,   122,   -48,   -48,   -48,   -48,   122,   -48,   -48,
     122,   -48,   -48,   -48,   122,   122,   122,   122,    12,   -48,
      24,   122,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     122,    28,    14,   -48,   122,   -48,   -48,     4,   -48,    31,
     -31,   134,   -26,    34,   -18,    19,   -48,   -48,   -48,    12,
     -48,   -48,    22,   -48,   -48,   -48,   -48,   179,   -20,   -48,
      12,    45,   135,   -48,   110,   -48,    69,    12,    29,    14,
     -48,   -48,    47,   -48,   -48,   -48,    49,    22,   -48,   110,
     -48,   122,   -48,   -48,   -48,    76,   -48,   -48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -48,   -48,     1,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -24,    -7,   -21,   -17,     3,    37,   -48,   -47,   -48,   -48,
      67,    73,   -48,    72,   -48,    83,   -48,    82,   -48,    85,
      81,   -37,   -48,   -48,   -48,    79,    80,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      36,    89,    14,    50,    51,    38,    36,    41,    42,    36,
      40,    44,    45,    43,    37,     2,    47,   103,   104,   105,
     106,     3,     4,   118,     3,     4,    58,    59,   119,    96,
      97,     3,     4,    70,    48,    46,    36,    49,     5,    65,
      81,    66,     6,     7,     8,     5,     9,    67,    71,     6,
       7,     8,    82,     9,    10,    83,    85,    10,     3,     4,
     107,    86,    11,    84,    10,   123,   114,    70,    12,    11,
      99,   102,     5,   129,    13,    12,     6,     7,     8,    36,
       9,    13,   112,    36,   136,     3,     4,   111,    61,    62,
      63,    10,   121,   127,   132,   130,    11,   131,   113,     5,
     117,    36,    12,     6,     7,     8,   134,     9,    13,   120,
       3,     4,   135,    36,    87,   125,   128,   101,    10,     3,
       4,   137,    90,    11,    91,    36,    36,   133,    36,    12,
     125,     3,     4,     5,    36,    13,   133,     6,     7,     8,
      92,     9,    93,    10,     3,     4,    95,    98,    39,    94,
       0,   100,    10,     0,    12,     0,     0,    11,     0,     0,
      13,     0,     0,    12,    10,   122,     0,     0,     0,    13,
      53,    54,    55,    56,     0,    12,     0,    10,     0,     0,
       0,    13,   103,   104,   105,   106,     0,     0,    12,     0,
       0,     0,     0,     0,    13,    72,    73,    74,    75,    76,
      77,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-48)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,    48,     1,    34,    35,     6,     7,     8,     9,    10,
       7,    12,    13,    10,    42,     0,    32,     3,     4,     5,
       6,     9,    10,    43,     9,    10,    52,    53,    48,    66,
      67,     9,    10,    34,    50,    47,    37,    33,    23,    57,
      37,    22,    27,    28,    29,    23,    31,    21,    58,    27,
      28,    29,    42,    31,    42,    47,    47,    42,     9,    10,
      46,    43,    47,    46,    42,   112,    44,    68,    53,    47,
      46,    43,    23,    44,    59,    53,    27,    28,    29,    80,
      31,    59,    51,    84,   131,     9,    10,    84,    54,    55,
      56,    42,    47,    24,    45,   119,    47,    50,    99,    23,
     107,   102,    53,    27,    28,    29,   127,    31,    59,   110,
       9,    10,   129,   114,    47,   114,   117,    80,    42,     9,
      10,    45,    49,    47,    52,   126,   127,   126,   129,    53,
     129,     9,    10,    23,   135,    59,   135,    27,    28,    29,
      57,    31,    60,    42,     9,    10,    65,    68,    47,    64,
      -1,    71,    42,    -1,    53,    -1,    -1,    47,    -1,    -1,
      59,    -1,    -1,    53,    42,    30,    -1,    -1,    -1,    59,
      36,    37,    38,    39,    -1,    53,    -1,    42,    -1,    -1,
      -1,    59,     3,     4,     5,     6,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    59,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    61,     0,     9,    10,    23,    27,    28,    29,    31,
      42,    47,    53,    59,    62,    63,    64,    65,    66,    67,
      68,    74,    75,    77,    79,    80,    81,    83,    85,    87,
      89,    90,    91,    92,    93,    96,    97,    42,    97,    47,
      74,    97,    97,    74,    97,    97,    47,    32,    50,    33,
      34,    35,    82,    36,    37,    38,    39,    84,    52,    53,
      86,    54,    55,    56,    88,    57,    22,    21,    94,    95,
      97,    58,    14,    15,    16,    17,    18,    19,    20,    49,
      76,    74,    42,    47,    46,    47,    43,    80,    97,    77,
      81,    83,    85,    87,    89,    90,    91,    91,    95,    46,
      96,    75,    43,     3,     4,     5,     6,    46,    69,    70,
      71,    74,    51,    97,    44,    62,    72,    71,    43,    48,
      97,    47,    30,    77,    78,    62,    73,    24,    97,    44,
      70,    50,    45,    62,    72,    73,    77,    45
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
/* Line 1787 of yacc.c  */
#line 33 "delbrot/delbrot.y"
    { ex(global, (yyvsp[(2) - (2)]));                        }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 46 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(FNDEF, 3, (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));   }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 50 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(DEFAULT, 2, (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));     }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 54 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(RETURN, 1, (yyvsp[(2) - (3)]));          }
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 55 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(RETURN, 1, NULL);        }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 59 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(';', 2, NULL, NULL);     }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 60 "delbrot/delbrot.y"
    { (yyval) = (yyvsp[(1) - (2)]);                               }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 64 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(IF, 2, (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));          }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 65 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(IF, 3, (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));      }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 69 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(IMPORT, 1, (yyvsp[(2) - (3)]));          }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 73 "delbrot/delbrot.y"
    { (yyval) = NULL;                             }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 74 "delbrot/delbrot.y"
    { (yyval) = (yyvsp[(1) - (1)]);                               }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 75 "delbrot/delbrot.y"
    { (yyval) = append((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 79 "delbrot/delbrot.y"
    { (yyval) = mkParamNode(0, (yyvsp[(1) - (2)])->num, (yyvsp[(2) - (2)]));      }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 80 "delbrot/delbrot.y"
    { (yyval) = mkParamNode(1, (yyvsp[(2) - (3)])->num, (yyvsp[(3) - (3)]));      }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 89 "delbrot/delbrot.y"
    { (yyval) = (yyvsp[(2) - (3)]);                               }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 94 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(';', 2, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));         }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 103 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(ASSIGN, 3, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));  }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 112 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(TERN, 3, (yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));    }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 116 "delbrot/delbrot.y"
    { (yyval) = (yyvsp[(1) - (1)]);                               }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 117 "delbrot/delbrot.y"
    { (yyval) = (yyvsp[(3) - (3)]);                               }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 122 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(BINOP, 3, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));   }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 127 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(BINOP, 3, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));   }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 132 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(BINOP, 3, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));   }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 141 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(BINOP, 3, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));   }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 150 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(BINOP, 3, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));   }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 159 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(BINOP, 3, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));   }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 168 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(BINOP, 3, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));   }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 173 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(BINOP, 3, (yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));   }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 177 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(CHAIN, 2, (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));       }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 182 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(FNCT, 2, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));        }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 187 "delbrot/delbrot.y"
    { (yyval) = getPluginFn((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));              }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 191 "delbrot/delbrot.y"
    { (yyval) = (yyvsp[(1) - (1)]);                               }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 192 "delbrot/delbrot.y"
    { (yyval) = append((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                   }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 196 "delbrot/delbrot.y"
    { (yyval) = (yyvsp[(1) - (1)]);                               }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 197 "delbrot/delbrot.y"
    { (yyval) = mkOptArgNode((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));             }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 202 "delbrot/delbrot.y"
    { (yyval) = mkOpNode(NEG, 1, (yyvsp[(2) - (2)]));             }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 203 "delbrot/delbrot.y"
    { (yyval) = mkOpNode('!', 1, (yyvsp[(2) - (2)]));             }
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 207 "delbrot/delbrot.y"
    { (yyval) = (yyvsp[(1) - (1)]);                               }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 208 "delbrot/delbrot.y"
    { (yyval) = (yyvsp[(1) - (1)]);                               }
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 209 "delbrot/delbrot.y"
    { (yyval) = (yyvsp[(2) - (3)]);                               }
    break;


/* Line 1787 of yacc.c  */
#line 1823 "delbrot/y.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 212 "delbrot/delbrot.y"
 /* end of grammar */

/* initialize a new node */
ASTnode *newNode() {
    ASTnode *p;
    if ((p = malloc(sizeof(ASTnode))) == NULL)
        MkvsynthError("out of memory");
    /* record in unfreed table */
    p->next = NULL;
    return p;
}

/* collect garbage */
void freeNodes() {
    /* free */
}

/* create a number node in the AST */
ASTnode *mkNumNode(double num) {
    ASTnode *p = newNode();
    p->type = typeNum;
    p->num = num;
    return p;
}

/* create a boolean node in the AST */
ASTnode *mkBoolNode(int bool) {
    ASTnode *p = newNode();
    p->type = typeBool;
    p->bool = bool;
    return p;
}

/* create a string node in the AST */
ASTnode *mkStrNode(char *str) {
    ASTnode *p = newNode();
    p->type = typeStr;
    /* remove enclosing quotation marks */
    p->str = strdup(str + 1);
    p->str[strlen(str)-2] = 0;
    return p;
}

/* create an identifier node in the AST */
ASTnode *mkIdNode(char *ident) {
    ASTnode *p = newNode();
    p->type = typeId;
    p->id = strdup(ident);
    return p;
}

/* create a parameter node in the AST */
ASTnode *mkParamNode(char opt, int type, ASTnode *p) {
    p->type = opt ? typeOptParam : typeParam;
    p->var.name = p->id;
    switch(type) {
        case NUM:    p->var.type = typeNum; break;
        case BOOL:   p->var.type = typeBool; break;
        case STRING: p->var.type = typeStr; break;
        case CLIP:   p->var.type = typeClip; break;
    }
    return p;
}

/* create an optional argument node in the AST */
ASTnode *mkOptArgNode(ASTnode *p, ASTnode *value) {
    p->type = typeOptArg;
    p->var.name = p->id;
    p->var.type = value->type;
    p->var.value = newNode();
    memcpy(p->var.value, value, sizeof(ASTnode));
    return p;
}

/* create an operation node in the AST */
ASTnode *mkOpNode(int oper, int nops, ...) {
    ASTnode *p = newNode();
    /* allocate space for ops */
    if ((p->op.ops = malloc(nops * sizeof(ASTnode *))) == NULL)
        MkvsynthError("out of memory");
    p->type = typeOp;
    p->op.oper = oper;
    p->op.nops = nops;
    int i;
    va_list ap;
    va_start(ap, nops);
    for (i = 0; i < nops; i++)
        p->op.ops[i] = va_arg(ap, ASTnode*);
    va_end(ap);
    return p;
}

/* add an ASTnode to the end of a linked list */
ASTnode *append(ASTnode *root, ASTnode *node) {
    if (!root)
        MkvsynthError("invalid argument");
    ASTnode *traverse;
    for(traverse = root; traverse->next; traverse = traverse->next);
    traverse->next = node;
    return root;
}

/* add a core function to the function table */
ASTnode *putFn(Env *e, fnEntry fn) {
    /* create entry */
    ASTnode *ptr = newNode();
    ptr->type = typeFn;
    ptr->fn.name = fn.name;
    ptr->fn.core.fnPtr = fn.fnPtr;
    /* add to function table */
    ptr->next = e->fnTable;
    e->fnTable = ptr;
    return ptr;
}

/* look up a function */
ASTnode *getFn(Env const *e, char const *fnName) {
    if (!e)
        return NULL;
    ASTnode *traverse;
    for (traverse = e->fnTable; traverse != NULL; traverse = traverse->next)
        if (strcmp(traverse->fn.name, fnName) == 0)
            return traverse;
    /* check parent environment */
    return getFn(e->parent, fnName);
}

/* look up a plugin function */
ASTnode *getPluginFn(ASTnode *pluginName, ASTnode *fnName) {
    /* look up plugin */
    Plugin *pTraverse;
    ASTnode * (*pluginFn) (ASTnode *, argList *);
    for (pTraverse = pluginList; pTraverse != NULL; pTraverse = pTraverse->next) {
        if (strcmp(pTraverse->name, pluginName->id) == 0) {
            /* look up symbol */
            dlerror();
            pluginFn = dlsym(pTraverse->handle, fnName->id);
            if (dlerror() != NULL)
                MkvsynthError("function \"%s\" not found in plugin %s", fnName->id, pluginName->id);
            ASTnode *fnNode = newNode();
            fnNode->type = typeFn;
            fnNode->fn.name = fnName->id;
            fnNode->fn.core.fnPtr = pluginFn;
            return fnNode;
        }
    }
    MkvsynthError("plugin \"%s\" not loaded", pluginName->id);
    return NULL;
}

/* allocate a new variable */
ASTnode *putVar(Env *e, char const *varName) {
    /* create entry */
    ASTnode *ptr = newNode();
    ptr->type = typeVar;
    ptr->var.name = strdup(varName);
    ptr->var.value = newNode();
    /* add to variable table */
    ptr->next = e->varTable;
    e->varTable = ptr;
    return ptr;
}

/* look up a variable's corresponding ASTnode */
ASTnode *getVar(Env const *e, char const *varName) {
    if (!e)
        return NULL;
    ASTnode *traverse;
    for (traverse = e->varTable; traverse != NULL; traverse = traverse->next)
        if (strcmp(traverse->var.name, varName) == 0)
            return traverse;
    /* check parent environment */
    //return getVar(e->parent, varName);
    return NULL;
}

/* alias for MkvsynthError */
void yyerror(char *error, ...) {
    va_list arglist;
    va_start(arglist, error);
    MkvsynthError(error, arglist);
    va_end(arglist);
}

int main(int argc, char **argv) {
    /* help message */
    if ((argc != 1 && argc != 2)
    || (argc > 1 && (!strcmp(argv[1],"-h") || !strcmp(argv[1],"--help")))) {
        printf("Usage: mkvsynth [FILE]\nInterprets an mkvsynth script.\n\nIf FILE is omitted, STDIN will be used instead.\n\nReport bugs on github.com/mkvsynth/mkvsynth.\n");
        exit(0);
    }

    /* read script file, if provided */
    if (argc == 2) {
        yyin = fopen(argv[1], "r+");
        if (!yyin) {
            printf("error: could not open file for reading\n");
            exit(1);
        }
    }

    /* create global environment */
    global = (Env *) malloc(sizeof(Env));
    global->varTable = NULL;
    global->parent = NULL;

    if (setjmp(global->returnContext) != 0)
        exit(0);

    /* initialize function table */
    int i;
    for(i = 0; coreFunctions[i].name != 0; i++)
        putFn(global, coreFunctions[i]);
    for(i = 0; internalFilters[i].name != 0; i++)
        putFn(global, internalFilters[i]);

    /* main parse loop */
    return yyparse();
}
