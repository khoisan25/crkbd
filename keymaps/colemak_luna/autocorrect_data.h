
// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once

// Autocorrection dictionary (215 entries):
//   :htere     -> there
//   abbout     -> about
//   abotu      -> about
//   baout      -> about
//   :theri     -> their
//   :thier     -> their
//   :owudl     -> would
//   woudl      -> would
//   peaple     -> people
//   peolpe     -> people
//   peopel     -> people
//   poeple     -> people
//   poeople    -> people
//   :hwihc     -> which
//   whcih      -> which
//   whihc      -> which
//   whlch      -> which
//   wihch      -> which
//   coudl      -> could
//   :htikn     -> think
//   :htink     -> think
//   thikn      -> think
//   thiunk     -> think
//   tihkn      -> think
//   :olther    -> other
//   :otehr     -> other
//   baceause   -> because
//   beacuse    -> because
//   becasue    -> because
//   beccause   -> because
//   becouse    -> because
//   becuase    -> because
//   theese     -> these
//   :goign     -> going
//   :gonig     -> going
//   :yaers     -> years
//   :yeasr     -> years
//   :thsoe     -> those
//   shoudl     -> should
//   raelly     -> really
//   realy      -> really
//   relaly     -> really
//   bedore     -> before
//   befoer     -> before
//   littel     -> little
//   beeing     -> being
//   :hwile     -> while
//   aroud      -> around
//   arround    -> around
//   arund      -> around
//   thign      -> thing
//   thigsn     -> things
//   thnigs     -> things
//   anohter    -> another
//   beteen     -> between
//   beween     -> between
//   bewteen    -> between
//   :eveyr     -> every
//   :graet     -> great
//   :agian     -> again
//   :sicne     -> since
//   alwasy     -> always
//   alwyas     -> always
//   throught   -> thought
//   :acheiv    -> achiev
//   almsot     -> almost
//   alomst     -> almost
//   chnage     -> change
//   chekc      -> check
//   childen    -> children
//   claer      -> clear
//   comapny    -> company
//   contian    -> contain
//   elasped    -> elapsed
//   feild      -> field
//   fitler     -> filter
//   firts      -> first
//   follwo     -> follow
//   :foudn     -> found
//   frequecy   -> frequency
//   firend     -> friend
//   freind     -> friend
//   heigth     -> height
//   iamge      -> image
//   inital     -> initial
//   intput     -> input
//   laguage    -> language
//   lenght     -> length
//   levle      -> level
//   libary     -> library
//   :moeny     -> money
//   mysefl     -> myself
//   ouptut     -> output
//   ouput      -> output
//   probaly    -> probably
//   probelm    -> problem
//   recrod     -> record
//   reponse    -> response
//   reprot     -> report
//   singel     -> single
//   stregth    -> strength
//   strengh    -> strength
//   tkaes      -> takes
//   therfore   -> therefore
//   todya      -> today
//   toghether  -> together
//   unkown     -> unknown
//   unqiue     -> unique
//   widht      -> width
//   aberation  -> aberration
//   accross    -> across
//   adviced    -> advised
//   aledge     -> allege
//   alledge    -> allege
//   amature    -> amateur
//   anomolous  -> anomalous
//   anomoly    -> anomaly
//   aparent    -> apparent
//   aparrent   -> apparent
//   apparant   -> apparent
//   apparrent  -> apparent
//   asthetic   -> aesthetic
//   auxilary   -> auxiliary
//   auxillary  -> auxiliary
//   auxilliary -> auxiliary
//   bankrupcy  -> bankruptcy
//   busness    -> business
//   bussiness  -> business
//   calander   -> calendar
//   commitee   -> committee
//   comittee   -> committee
//   competance -> competence
//   competant  -> competent
//   concensus  -> consensus
//   cognizent  -> cognizant
//   copywrite: -> copyright
//   choosen    -> chosen
//   collegue   -> colleague
//   excercise  -> exercise
//   :grammer   -> grammar
//   :guage     -> gauge
//   guaratee   -> guarantee
//   garantee   -> guarantee
//   gaurantee  -> guarantee
//   heirarchy  -> hierarchy
//   hygeine    -> hygiene
//   hypocracy  -> hypocrisy
//   hypocrasy  -> hypocrisy
//   hypocricy  -> hypocrisy
//   hypocrit:  -> hypocrite
//   looses:    -> loses
//   maintence  -> maintenance
//   morgage    -> mortgage
//   neccesary  -> necessary
//   necesary   -> necessary
//   pallete    -> palette
//   paralel    -> parallel
//   priviledge -> privilege
//   proove     -> prove
//   psuedo     -> pseudo
//   reciept    -> receipt
//   receiev    -> receiv
//   reciev     -> receiv
//   recepient  -> recipient
//   recipiant  -> recipient
//   relevent   -> relevant
//   repitition -> repetition
//   safty      -> safety
//   saftey     -> safety
//   seperat    -> separat
//   spectogram -> spectrogram
//   symetric   -> symmetric
//   tolerence  -> tolerance
//   improt     -> import
//   imprt      -> import
//   namesapce  -> namespace
//   namespcae  -> namespace
//   pirnt      -> print
//   :rference  -> reference
//   referece   -> reference
//   singed     -> signed
//   stirng     -> string
//   strign     -> string
//   swithc     -> switch
//   swtich     -> switch
//   :ture      -> true
//   retrun     -> return
//   retun      -> return
//   reutrn     -> return
//   cosnt      -> const
//   yeild      -> yield
//   :agred     -> agreed
//   :ajust     -> adjust
//   :anual     -> annual
//   :asign     -> assign
//   :aslo:     -> also
//   :casue     -> cause
//   :choses    -> chooses
//   :gaurd     -> guard
//   :haev      -> have
//   :hapen     -> happen
//   :idaes     -> ideas
//   :jsut:     -> just
//   :jstu:     -> just
//   :knwo      -> know
//   :konw      -> know
//   :kwno      -> know
//   :ocuntry   -> country
//   :ocur      -> occur
//   :socre     -> score
//   :szie      -> size
//   :the:the:  -> the
//   :turth     -> truth
//   :uesd:     -> used
//   :usally    -> usually

#define AUTOCORRECT_MIN_LENGTH 5 // "abotu"
#define AUTOCORRECT_MAX_LENGTH 10 // "auxilliary"
#define DICTIONARY_SIZE 3174

static const uint8_t autocorrect_data[DICTIONARY_SIZE] PROGMEM = {
    0x6C, 0x3D, 0x00, 0x04, 0xB2, 0x00, 0x06, 0xBB, 0x00, 0x07, 0x18, 0x01, 0x08, 0xCA, 0x01, 0x0A,
    0xBF, 0x04, 0x0B, 0xEA, 0x04, 0x0C, 0x58, 0x05, 0x0E, 0x62, 0x05, 0x0F, 0x7E, 0x05, 0x10, 0x08,
    0x06, 0x11, 0x2B, 0x06, 0x12, 0x71, 0x07, 0x15, 0xA5, 0x07, 0x16, 0x56, 0x08, 0x17, 0x12, 0x09,
    0x18, 0xAA, 0x0A, 0x19, 0xB3, 0x0A, 0x1A, 0xE9, 0x0A, 0x1C, 0xF3, 0x0A, 0x00, 0x47, 0x50, 0x00,
    0x08, 0x5A, 0x00, 0x12, 0x79, 0x00, 0x16, 0x83, 0x00, 0x17, 0x8E, 0x00, 0x18, 0xA8, 0x00, 0x00,
    0x16, 0x08, 0x18, 0x2C, 0x00, 0x83, 0x73, 0x65, 0x64, 0x00, 0x4B, 0x61, 0x00, 0x17, 0x6A, 0x00,
    0x00, 0x17, 0x2C, 0x08, 0x0B, 0x17, 0x2C, 0x00, 0x84, 0x00, 0x0C, 0x15, 0x1A, 0x1C, 0x13, 0x12,
    0x06, 0x00, 0x85, 0x72, 0x69, 0x67, 0x68, 0x74, 0x00, 0x0F, 0x16, 0x04, 0x2C, 0x00, 0x83, 0x6C,
    0x73, 0x6F, 0x00, 0x08, 0x16, 0x12, 0x12, 0x0F, 0x00, 0x84, 0x73, 0x65, 0x73, 0x00, 0x4C, 0x95,
    0x00, 0x18, 0x9F, 0x00, 0x00, 0x15, 0x06, 0x12, 0x13, 0x1C, 0x0B, 0x00, 0x80, 0x65, 0x00, 0x16,
    0x0D, 0x2C, 0x00, 0x83, 0x75, 0x73, 0x74, 0x00, 0x17, 0x16, 0x0D, 0x2C, 0x00, 0x83, 0x75, 0x73,
    0x74, 0x00, 0x1C, 0x07, 0x12, 0x17, 0x00, 0x81, 0x61, 0x79, 0x00, 0x4B, 0xC5, 0x00, 0x0C, 0xEB,
    0x00, 0x0E, 0x10, 0x01, 0x00, 0x4C, 0xCC, 0x00, 0x17, 0xE3, 0x00, 0x00, 0x4B, 0xD3, 0x00, 0x1A,
    0xD9, 0x00, 0x00, 0x1A, 0x00, 0x81, 0x63, 0x68, 0x00, 0x0B, 0x2C, 0x00, 0x84, 0x77, 0x68, 0x69,
    0x63, 0x68, 0x00, 0x0C, 0x1A, 0x16, 0x00, 0x81, 0x63, 0x68, 0x00, 0x55, 0xF2, 0x00, 0x17, 0x00,
    0x01, 0x00, 0x17, 0x08, 0x10, 0x1C, 0x16, 0x00, 0x84, 0x6D, 0x65, 0x74, 0x72, 0x69, 0x63, 0x00,
    0x08, 0x0B, 0x17, 0x16, 0x04, 0x00, 0x86, 0x65, 0x73, 0x74, 0x68, 0x65, 0x74, 0x69, 0x63, 0x00,
    0x08, 0x0B, 0x06, 0x00, 0x81, 0x63, 0x6B, 0x00, 0x48, 0x2B, 0x01, 0x0F, 0x5F, 0x01, 0x11, 0x75,
    0x01, 0x12, 0xAD, 0x01, 0x15, 0xB7, 0x01, 0x18, 0xC2, 0x01, 0x00, 0x46, 0x38, 0x01, 0x0A, 0x42,
    0x01, 0x13, 0x4C, 0x01, 0x15, 0x57, 0x01, 0x00, 0x0C, 0x19, 0x07, 0x04, 0x00, 0x82, 0x73, 0x65,
    0x64, 0x00, 0x11, 0x0C, 0x16, 0x00, 0x83, 0x67, 0x6E, 0x65, 0x64, 0x00, 0x16, 0x04, 0x0F, 0x08,
    0x00, 0x83, 0x70, 0x73, 0x65, 0x64, 0x00, 0x0A, 0x04, 0x2C, 0x00, 0x80, 0x65, 0x64, 0x00, 0x0C,
    0x08, 0x00, 0x49, 0x69, 0x01, 0x1C, 0x6F, 0x01, 0x00, 0x83, 0x69, 0x65, 0x6C, 0x64, 0x00, 0x83,
    0x69, 0x65, 0x6C, 0x64, 0x00, 0x48, 0x7F, 0x01, 0x0C, 0x8A, 0x01, 0x18, 0x94, 0x01, 0x00, 0x15,
    0x0C, 0x09, 0x00, 0x84, 0x72, 0x69, 0x65, 0x6E, 0x64, 0x00, 0x08, 0x15, 0x09, 0x00, 0x83, 0x69,
    0x65, 0x6E, 0x64, 0x00, 0x52, 0x9B, 0x01, 0x15, 0xA5, 0x01, 0x00, 0x15, 0x15, 0x04, 0x00, 0x84,
    0x6F, 0x75, 0x6E, 0x64, 0x00, 0x04, 0x00, 0x82, 0x6F, 0x75, 0x6E, 0x64, 0x00, 0x15, 0x06, 0x08,
    0x15, 0x00, 0x82, 0x6F, 0x72, 0x64, 0x00, 0x18, 0x04, 0x0A, 0x2C, 0x00, 0x83, 0x75, 0x61, 0x72,
    0x64, 0x00, 0x12, 0x15, 0x04, 0x00, 0x80, 0x6E, 0x64, 0x00, 0x44, 0xF5, 0x01, 0x06, 0x02, 0x02,
    0x08, 0x69, 0x02, 0x0A, 0xBD, 0x02, 0x0C, 0x29, 0x03, 0x0F, 0x32, 0x03, 0x11, 0x76, 0x03, 0x12,
    0x91, 0x03, 0x13, 0x9B, 0x03, 0x15, 0xA5, 0x03, 0x16, 0xF9, 0x03, 0x17, 0x74, 0x04, 0x18, 0x80,
    0x04, 0x19, 0xB6, 0x04, 0x00, 0x06, 0x13, 0x16, 0x08, 0x10, 0x04, 0x11, 0x00, 0x82, 0x61, 0x63,
    0x65, 0x00, 0x48, 0x0C, 0x02, 0x11, 0x17, 0x02, 0x13, 0x5C, 0x02, 0x00, 0x15, 0x08, 0x09, 0x08,
    0x15, 0x00, 0x81, 0x6E, 0x63, 0x65, 0x00, 0x44, 0x1E, 0x02, 0x08, 0x2B, 0x02, 0x00, 0x17, 0x08,
    0x13, 0x10, 0x12, 0x06, 0x00, 0x83, 0x65, 0x6E, 0x63, 0x65, 0x00, 0x55, 0x32, 0x02, 0x17, 0x51,
    0x02, 0x00, 0x08, 0x00, 0x49, 0x3B, 0x02, 0x0F, 0x48, 0x02, 0x00, 0x15, 0x2C, 0x00, 0x86, 0x65,
    0x66, 0x65, 0x72, 0x65, 0x6E, 0x63, 0x65, 0x00, 0x12, 0x17, 0x00, 0x83, 0x61, 0x6E, 0x63, 0x65,
    0x00, 0x11, 0x0C, 0x04, 0x10, 0x00, 0x81, 0x61, 0x6E, 0x63, 0x65, 0x00, 0x04, 0x16, 0x08, 0x10,
    0x04, 0x11, 0x00, 0x83, 0x70, 0x61, 0x63, 0x65, 0x00, 0x17, 0x00, 0x44, 0x78, 0x02, 0x0C, 0x83,
    0x02, 0x11, 0x8D, 0x02, 0x17, 0xB0, 0x02, 0x00, 0x15, 0x04, 0x18, 0x0A, 0x00, 0x82, 0x6E, 0x74,
    0x65, 0x65, 0x00, 0x10, 0x10, 0x12, 0x06, 0x00, 0x81, 0x74, 0x65, 0x65, 0x00, 0x04, 0x15, 0x00,
    0x44, 0x97, 0x02, 0x18, 0xA3, 0x02, 0x00, 0x0A, 0x00, 0x86, 0x75, 0x61, 0x72, 0x61, 0x6E, 0x74,
    0x65, 0x65, 0x00, 0x04, 0x0A, 0x00, 0x87, 0x75, 0x61, 0x72, 0x61, 0x6E, 0x74, 0x65, 0x65, 0x00,
    0x0C, 0x10, 0x12, 0x06, 0x00, 0x84, 0x6D, 0x69, 0x74, 0x74, 0x65, 0x65, 0x00, 0x44, 0xC7, 0x02,
    0x07, 0xFE, 0x02, 0x10, 0x20, 0x03, 0x00, 0x4A, 0xD1, 0x02, 0x11, 0xDC, 0x02, 0x18, 0xE5, 0x02,
    0x00, 0x15, 0x12, 0x10, 0x00, 0x83, 0x74, 0x67, 0x61, 0x67, 0x65, 0x00, 0x0B, 0x06, 0x00, 0x83,
    0x61, 0x6E, 0x67, 0x65, 0x00, 0x0A, 0x00, 0x6C, 0xEE, 0x02, 0x04, 0xF4, 0x02, 0x00, 0x83, 0x61,
    0x75, 0x67, 0x65, 0x00, 0x0F, 0x00, 0x84, 0x6E, 0x67, 0x75, 0x61, 0x67, 0x65, 0x00, 0x08, 0x0F,
    0x00, 0x44, 0x0B, 0x03, 0x0C, 0x11, 0x03, 0x0F, 0x1A, 0x03, 0x00, 0x83, 0x6C, 0x65, 0x67, 0x65,
    0x00, 0x19, 0x0C, 0x15, 0x13, 0x00, 0x82, 0x67, 0x65, 0x00, 0x04, 0x00, 0x82, 0x67, 0x65, 0x00,
    0x04, 0x0C, 0x00, 0x83, 0x6D, 0x61, 0x67, 0x65, 0x00, 0x1D, 0x16, 0x2C, 0x00, 0x82, 0x69, 0x7A,
    0x65, 0x00, 0x4C, 0x3C, 0x03, 0x13, 0x47, 0x03, 0x19, 0x6F, 0x03, 0x00, 0x1A, 0x0B, 0x2C, 0x00,
    0x84, 0x77, 0x68, 0x69, 0x6C, 0x65, 0x00, 0x44, 0x51, 0x03, 0x08, 0x5A, 0x03, 0x12, 0x64, 0x03,
    0x00, 0x08, 0x13, 0x00, 0x83, 0x6F, 0x70, 0x6C, 0x65, 0x00, 0x12, 0x13, 0x00, 0x84, 0x65, 0x6F,
    0x70, 0x6C, 0x65, 0x00, 0x08, 0x12, 0x13, 0x00, 0x85, 0x65, 0x6F, 0x70, 0x6C, 0x65, 0x00, 0x08,
    0x0F, 0x00, 0x81, 0x65, 0x6C, 0x00, 0x46, 0x7D, 0x03, 0x0C, 0x86, 0x03, 0x00, 0x0C, 0x16, 0x2C,
    0x00, 0x82, 0x6E, 0x63, 0x65, 0x00, 0x08, 0x0A, 0x1C, 0x0B, 0x00, 0x83, 0x69, 0x65, 0x6E, 0x65,
    0x00, 0x16, 0x0B, 0x17, 0x2C, 0x00, 0x82, 0x6F, 0x73, 0x65, 0x00, 0x0F, 0x12, 0x08, 0x13, 0x00,
    0x82, 0x70, 0x6C, 0x65, 0x00, 0x46, 0xB2, 0x03, 0x08, 0xBC, 0x03, 0x12, 0xC7, 0x03, 0x18, 0xE3,
    0x03, 0x00, 0x12, 0x16, 0x2C, 0x00, 0x83, 0x63, 0x6F, 0x72, 0x65, 0x00, 0x17, 0x0B, 0x2C, 0x00,
    0x84, 0x74, 0x68, 0x65, 0x72, 0x65, 0x00, 0x47, 0xCE, 0x03, 0x09, 0xD7, 0x03, 0x00, 0x08, 0x05,
    0x00, 0x83, 0x66, 0x6F, 0x72, 0x65, 0x00, 0x15, 0x08, 0x0B, 0x17, 0x00, 0x83, 0x65, 0x66, 0x6F,
    0x72, 0x65, 0x00, 0x17, 0x00, 0x6C, 0xEC, 0x03, 0x04, 0xF1, 0x03, 0x00, 0x82, 0x72, 0x75, 0x65,
    0x00, 0x10, 0x04, 0x00, 0x82, 0x65, 0x75, 0x72, 0x00, 0x44, 0x09, 0x04, 0x08, 0x14, 0x04, 0x0C,
    0x1C, 0x04, 0x11, 0x2B, 0x04, 0x18, 0x38, 0x04, 0x00, 0x18, 0x06, 0x08, 0x05, 0x00, 0x83, 0x61,
    0x75, 0x73, 0x65, 0x00, 0x08, 0x0B, 0x17, 0x00, 0x82, 0x73, 0x65, 0x00, 0x06, 0x15, 0x08, 0x06,
    0x1B, 0x08, 0x00, 0x86, 0x65, 0x72, 0x63, 0x69, 0x73, 0x65, 0x00, 0x12, 0x13, 0x08, 0x15, 0x00,
    0x84, 0x73, 0x70, 0x6F, 0x6E, 0x73, 0x65, 0x00, 0x44, 0x42, 0x04, 0x06, 0x5F, 0x04, 0x12, 0x6A,
    0x04, 0x00, 0x46, 0x49, 0x04, 0x08, 0x53, 0x04, 0x00, 0x06, 0x08, 0x05, 0x00, 0x84, 0x61, 0x75,
    0x73, 0x65, 0x00, 0x06, 0x04, 0x05, 0x00, 0x86, 0x65, 0x63, 0x61, 0x75, 0x73, 0x65, 0x00, 0x04,
    0x08, 0x05, 0x00, 0x84, 0x63, 0x61, 0x75, 0x73, 0x65, 0x00, 0x06, 0x08, 0x05, 0x00, 0x83, 0x61,
    0x75, 0x73, 0x65, 0x00, 0x08, 0x0F, 0x0F, 0x04, 0x13, 0x00, 0x83, 0x65, 0x74, 0x74, 0x65, 0x00,
    0x4A, 0x8A, 0x04, 0x0C, 0x96, 0x04, 0x16, 0xA0, 0x04, 0x00, 0x08, 0x0F, 0x0F, 0x12, 0x06, 0x00,
    0x82, 0x61, 0x67, 0x75, 0x65, 0x00, 0x14, 0x11, 0x18, 0x00, 0x83, 0x69, 0x71, 0x75, 0x65, 0x00,
    0x04, 0x06, 0x00, 0x6C, 0xAA, 0x04, 0x08, 0xAF, 0x04, 0x00, 0x82, 0x75, 0x73, 0x65, 0x00, 0x05,
    0x00, 0x82, 0x75, 0x73, 0x65, 0x00, 0x12, 0x12, 0x15, 0x13, 0x00, 0x82, 0x76, 0x65, 0x00, 0x4C,
    0xC6, 0x04, 0x11, 0xD0, 0x04, 0x00, 0x11, 0x12, 0x0A, 0x2C, 0x00, 0x82, 0x69, 0x6E, 0x67, 0x00,
    0x4C, 0xD7, 0x04, 0x15, 0xE0, 0x04, 0x00, 0x08, 0x08, 0x05, 0x00, 0x83, 0x69, 0x6E, 0x67, 0x00,
    0x0C, 0x17, 0x16, 0x00, 0x83, 0x72, 0x69, 0x6E, 0x67, 0x00, 0x46, 0xF7, 0x04, 0x0A, 0x1C, 0x05,
    0x0C, 0x26, 0x05, 0x17, 0x2F, 0x05, 0x00, 0x4B, 0x01, 0x05, 0x0C, 0x0A, 0x05, 0x0F, 0x14, 0x05,
    0x00, 0x0C, 0x1A, 0x00, 0x83, 0x68, 0x69, 0x63, 0x68, 0x00, 0x17, 0x1A, 0x16, 0x00, 0x83, 0x69,
    0x74, 0x63, 0x68, 0x00, 0x0B, 0x1A, 0x00, 0x82, 0x69, 0x63, 0x68, 0x00, 0x11, 0x08, 0x15, 0x17,
    0x16, 0x00, 0x80, 0x74, 0x68, 0x00, 0x06, 0x0B, 0x1A, 0x00, 0x82, 0x69, 0x63, 0x68, 0x00, 0x4A,
    0x36, 0x05, 0x15, 0x4E, 0x05, 0x00, 0x48, 0x3D, 0x05, 0x0C, 0x47, 0x05, 0x00, 0x15, 0x17, 0x16,
    0x00, 0x82, 0x6E, 0x67, 0x74, 0x68, 0x00, 0x08, 0x0B, 0x00, 0x81, 0x68, 0x74, 0x00, 0x18, 0x17,
    0x2C, 0x00, 0x83, 0x72, 0x75, 0x74, 0x68, 0x00, 0x15, 0x08, 0x0B, 0x17, 0x2C, 0x00, 0x81, 0x69,
    0x72, 0x00, 0x11, 0x00, 0x4C, 0x6B, 0x05, 0x18, 0x76, 0x05, 0x00, 0x17, 0x0B, 0x2C, 0x00, 0x84,
    0x74, 0x68, 0x69, 0x6E, 0x6B, 0x00, 0x0C, 0x0B, 0x17, 0x00, 0x82, 0x6E, 0x6B, 0x00, 0x44, 0x8B,
    0x05, 0x07, 0xA5, 0x05, 0x08, 0xD0, 0x05, 0x09, 0xFF, 0x05, 0x00, 0x57, 0x92, 0x05, 0x18, 0x9B,
    0x05, 0x00, 0x0C, 0x11, 0x0C, 0x00, 0x81, 0x69, 0x61, 0x6C, 0x00, 0x11, 0x04, 0x2C, 0x00, 0x82,
    0x6E, 0x75, 0x61, 0x6C, 0x00, 0x18, 0x00, 0x52, 0xAE, 0x05, 0x1A, 0xC6, 0x05, 0x00, 0x46, 0xB8,
    0x05, 0x0B, 0xBC, 0x05, 0x1A, 0xC2, 0x05, 0x00, 0x81, 0x6C, 0x64, 0x00, 0x16, 0x00, 0x81, 0x6C,
    0x64, 0x00, 0x81, 0x6C, 0x64, 0x00, 0x12, 0x2C, 0x00, 0x84, 0x77, 0x6F, 0x75, 0x6C, 0x64, 0x00,
    0x4A, 0xDD, 0x05, 0x0F, 0xE5, 0x05, 0x13, 0xEF, 0x05, 0x17, 0xF7, 0x05, 0x00, 0x11, 0x0C, 0x16,
    0x00, 0x81, 0x6C, 0x65, 0x00, 0x04, 0x15, 0x04, 0x13, 0x00, 0x81, 0x6C, 0x65, 0x6C, 0x00, 0x12,
    0x08, 0x13, 0x00, 0x81, 0x6C, 0x65, 0x00, 0x17, 0x0C, 0x0F, 0x00, 0x81, 0x6C, 0x65, 0x00, 0x08,
    0x16, 0x1C, 0x10, 0x00, 0x81, 0x6C, 0x66, 0x00, 0x44, 0x0F, 0x06, 0x0F, 0x20, 0x06, 0x00, 0x15,
    0x0A, 0x12, 0x17, 0x06, 0x08, 0x13, 0x16, 0x00, 0x84, 0x72, 0x6F, 0x67, 0x72, 0x61, 0x6D, 0x00,
    0x08, 0x05, 0x12, 0x15, 0x13, 0x00, 0x82, 0x6C, 0x65, 0x6D, 0x00, 0x44, 0x4A, 0x06, 0x07, 0x64,
    0x06, 0x08, 0x6D, 0x06, 0x0A, 0xC1, 0x06, 0x0E, 0xED, 0x06, 0x12, 0x14, 0x07, 0x15, 0x3A, 0x07,
    0x16, 0x45, 0x07, 0x18, 0x4F, 0x07, 0x1A, 0x66, 0x07, 0x00, 0x0C, 0x00, 0x4A, 0x53, 0x06, 0x17,
    0x5B, 0x06, 0x00, 0x04, 0x2C, 0x00, 0x82, 0x61, 0x69, 0x6E, 0x00, 0x11, 0x12, 0x06, 0x00, 0x82,
    0x61, 0x69, 0x6E, 0x00, 0x18, 0x12, 0x09, 0x2C, 0x00, 0x81, 0x6E, 0x64, 0x00, 0x47, 0x7A, 0x06,
    0x08, 0x84, 0x06, 0x13, 0xAE, 0x06, 0x16, 0xB7, 0x06, 0x00, 0x0F, 0x0C, 0x0B, 0x06, 0x00, 0x81,
    0x72, 0x65, 0x6E, 0x00, 0x57, 0x8B, 0x06, 0x1A, 0xA4, 0x06, 0x00, 0x48, 0x92, 0x06, 0x1A, 0x9A,
    0x06, 0x00, 0x05, 0x00, 0x82, 0x77, 0x65, 0x65, 0x6E, 0x00, 0x08, 0x05, 0x00, 0x84, 0x74, 0x77,
    0x65, 0x65, 0x6E, 0x00, 0x08, 0x05, 0x00, 0x83, 0x74, 0x77, 0x65, 0x65, 0x6E, 0x00, 0x04, 0x0B,
    0x2C, 0x00, 0x81, 0x70, 0x65, 0x6E, 0x00, 0x12, 0x12, 0x0B, 0x06, 0x00, 0x83, 0x73, 0x65, 0x6E,
    0x00, 0x0C, 0x00, 0x4B, 0xD0, 0x06, 0x12, 0xD6, 0x06, 0x15, 0xDD, 0x06, 0x16, 0xE4, 0x06, 0x00,
    0x17, 0x00, 0x81, 0x6E, 0x67, 0x00, 0x0A, 0x2C, 0x00, 0x81, 0x6E, 0x67, 0x00, 0x17, 0x16, 0x00,
    0x81, 0x6E, 0x67, 0x00, 0x04, 0x2C, 0x00, 0x82, 0x73, 0x69, 0x67, 0x6E, 0x00, 0x4B, 0xF4, 0x06,
    0x0C, 0xFD, 0x06, 0x00, 0x0C, 0x17, 0x00, 0x83, 0x68, 0x69, 0x6E, 0x6B, 0x00, 0x4B, 0x04, 0x07,
    0x17, 0x0A, 0x07, 0x00, 0x17, 0x00, 0x81, 0x6E, 0x6B, 0x00, 0x0B, 0x2C, 0x00, 0x84, 0x74, 0x68,
    0x69, 0x6E, 0x6B, 0x00, 0x0C, 0x17, 0x00, 0x44, 0x1E, 0x07, 0x0C, 0x2B, 0x07, 0x00, 0x15, 0x08,
    0x05, 0x04, 0x00, 0x84, 0x72, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x17, 0x0C, 0x13, 0x08, 0x15,
    0x00, 0x86, 0x65, 0x74, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x00, 0x17, 0x18, 0x08, 0x15, 0x00, 0x83,
    0x74, 0x75, 0x72, 0x6E, 0x00, 0x0A, 0x0C, 0x0B, 0x17, 0x00, 0x82, 0x6E, 0x67, 0x73, 0x00, 0x55,
    0x56, 0x07, 0x17, 0x5F, 0x07, 0x00, 0x17, 0x08, 0x15, 0x00, 0x82, 0x75, 0x72, 0x6E, 0x00, 0x08,
    0x15, 0x00, 0x80, 0x72, 0x6E, 0x00, 0x12, 0x0E, 0x11, 0x18, 0x00, 0x82, 0x6E, 0x6F, 0x77, 0x6E,
    0x00, 0x47, 0x7B, 0x07, 0x11, 0x86, 0x07, 0x1A, 0x8F, 0x07, 0x00, 0x08, 0x18, 0x16, 0x13, 0x00,
    0x83, 0x65, 0x75, 0x64, 0x6F, 0x00, 0x1A, 0x0E, 0x2C, 0x00, 0x82, 0x6E, 0x6F, 0x77, 0x00, 0x4F,
    0x96, 0x07, 0x11, 0x9E, 0x07, 0x00, 0x0F, 0x12, 0x09, 0x00, 0x81, 0x6F, 0x77, 0x00, 0x0E, 0x2C,
    0x00, 0x81, 0x6F, 0x77, 0x00, 0x48, 0xB5, 0x07, 0x0B, 0x31, 0x08, 0x16, 0x3B, 0x08, 0x18, 0x44,
    0x08, 0x1C, 0x4D, 0x08, 0x00, 0x44, 0xCE, 0x07, 0x07, 0xD6, 0x07, 0x0B, 0xE3, 0x07, 0x0C, 0x01,
    0x08, 0x0F, 0x0A, 0x08, 0x10, 0x14, 0x08, 0x12, 0x1E, 0x08, 0x17, 0x26, 0x08, 0x00, 0x0F, 0x06,
    0x00, 0x82, 0x65, 0x61, 0x72, 0x00, 0x11, 0x04, 0x0F, 0x04, 0x06, 0x00, 0x84, 0x65, 0x6E, 0x64,
    0x61, 0x72, 0x00, 0x17, 0x00, 0x48, 0xEC, 0x07, 0x0F, 0xF8, 0x07, 0x00, 0x0B, 0x0A, 0x12, 0x17,
    0x00, 0x85, 0x65, 0x74, 0x68, 0x65, 0x72, 0x00, 0x12, 0x2C, 0x00, 0x84, 0x74, 0x68, 0x65, 0x72,
    0x00, 0x0B, 0x17, 0x2C, 0x00, 0x82, 0x65, 0x69, 0x72, 0x00, 0x17, 0x0C, 0x09, 0x00, 0x83, 0x6C,
    0x74, 0x65, 0x72, 0x00, 0x10, 0x04, 0x15, 0x0A, 0x2C, 0x00, 0x81, 0x61, 0x72, 0x00, 0x09, 0x08,
    0x05, 0x00, 0x81, 0x72, 0x65, 0x00, 0x0B, 0x12, 0x11, 0x04, 0x00, 0x83, 0x74, 0x68, 0x65, 0x72,
    0x00, 0x08, 0x17, 0x12, 0x2C, 0x00, 0x82, 0x68, 0x65, 0x72, 0x00, 0x04, 0x08, 0x1C, 0x2C, 0x00,
    0x81, 0x72, 0x73, 0x00, 0x06, 0x12, 0x2C, 0x00, 0x81, 0x63, 0x75, 0x72, 0x00, 0x08, 0x19, 0x08,
    0x2C, 0x00, 0x81, 0x72, 0x79, 0x00, 0x44, 0x6C, 0x08, 0x08, 0x76, 0x08, 0x0A, 0x9F, 0x08, 0x15,
    0xAA, 0x08, 0x16, 0xB5, 0x08, 0x17, 0xE6, 0x08, 0x18, 0xEE, 0x08, 0x00, 0x1C, 0x1A, 0x0F, 0x04,
    0x00, 0x82, 0x61, 0x79, 0x73, 0x00, 0x44, 0x7D, 0x08, 0x16, 0x94, 0x08, 0x00, 0x47, 0x84, 0x08,
    0x0E, 0x8C, 0x08, 0x00, 0x0C, 0x2C, 0x00, 0x82, 0x65, 0x61, 0x73, 0x00, 0x17, 0x00, 0x83, 0x61,
    0x6B, 0x65, 0x73, 0x00, 0x12, 0x0B, 0x06, 0x2C, 0x00, 0x82, 0x6F, 0x73, 0x65, 0x73, 0x00, 0x0C,
    0x11, 0x0B, 0x17, 0x00, 0x83, 0x69, 0x6E, 0x67, 0x73, 0x00, 0x08, 0x04, 0x1C, 0x2C, 0x00, 0x83,
    0x65, 0x61, 0x72, 0x73, 0x00, 0x48, 0xBC, 0x08, 0x12, 0xDB, 0x08, 0x00, 0x11, 0x00, 0x4C, 0xC5,
    0x08, 0x16, 0xD1, 0x08, 0x00, 0x16, 0x16, 0x18, 0x05, 0x00, 0x85, 0x69, 0x6E, 0x65, 0x73, 0x73,
    0x00, 0x18, 0x05, 0x00, 0x83, 0x69, 0x6E, 0x65, 0x73, 0x73, 0x00, 0x15, 0x06, 0x06, 0x04, 0x00,
    0x84, 0x72, 0x6F, 0x73, 0x73, 0x00, 0x15, 0x0C, 0x09, 0x00, 0x81, 0x73, 0x74, 0x00, 0x52, 0xF5,
    0x08, 0x16, 0x03, 0x09, 0x00, 0x0F, 0x12, 0x10, 0x12, 0x11, 0x04, 0x00, 0x84, 0x61, 0x6C, 0x6F,
    0x75, 0x73, 0x00, 0x11, 0x08, 0x06, 0x11, 0x12, 0x06, 0x00, 0x85, 0x73, 0x65, 0x6E, 0x73, 0x75,
    0x73, 0x00, 0x44, 0x2E, 0x09, 0x08, 0x3A, 0x09, 0x0B, 0x44, 0x09, 0x11, 0x6C, 0x09, 0x12, 0x0F,
    0x0A, 0x13, 0x36, 0x0A, 0x15, 0x42, 0x0A, 0x16, 0x4B, 0x0A, 0x18, 0x67, 0x0A, 0x00, 0x15, 0x08,
    0x13, 0x08, 0x16, 0x00, 0x83, 0x61, 0x72, 0x61, 0x74, 0x00, 0x04, 0x15, 0x0A, 0x2C, 0x00, 0x82,
    0x65, 0x61, 0x74, 0x00, 0x47, 0x4B, 0x09, 0x0A, 0x52, 0x09, 0x00, 0x0C, 0x1A, 0x00, 0x81, 0x74,
    0x68, 0x00, 0x51, 0x59, 0x09, 0x18, 0x60, 0x09, 0x00, 0x08, 0x0F, 0x00, 0x81, 0x74, 0x68, 0x00,
    0x12, 0x15, 0x0B, 0x17, 0x00, 0x85, 0x6F, 0x75, 0x67, 0x68, 0x74, 0x00, 0x44, 0x79, 0x09, 0x08,
    0xA3, 0x09, 0x15, 0xFE, 0x09, 0x16, 0x07, 0x0A, 0x00, 0x4C, 0x83, 0x09, 0x15, 0x8E, 0x09, 0x17,
    0x98, 0x09, 0x00, 0x13, 0x0C, 0x06, 0x08, 0x15, 0x00, 0x82, 0x65, 0x6E, 0x74, 0x00, 0x04, 0x13,
    0x13, 0x04, 0x00, 0x82, 0x65, 0x6E, 0x74, 0x00, 0x08, 0x13, 0x10, 0x12, 0x06, 0x00, 0x82, 0x65,
    0x6E, 0x74, 0x00, 0x4C, 0xB0, 0x09, 0x15, 0xBE, 0x09, 0x19, 0xE9, 0x09, 0x1D, 0xF3, 0x09, 0x00,
    0x13, 0x08, 0x06, 0x08, 0x15, 0x00, 0x85, 0x69, 0x70, 0x69, 0x65, 0x6E, 0x74, 0x00, 0x44, 0xC5,
    0x09, 0x15, 0xD0, 0x09, 0x00, 0x13, 0x04, 0x00, 0x84, 0x70, 0x61, 0x72, 0x65, 0x6E, 0x74, 0x00,
    0x04, 0x13, 0x00, 0x44, 0xDA, 0x09, 0x13, 0xE2, 0x09, 0x00, 0x85, 0x70, 0x61, 0x72, 0x65, 0x6E,
    0x74, 0x00, 0x04, 0x00, 0x83, 0x65, 0x6E, 0x74, 0x00, 0x08, 0x0F, 0x08, 0x15, 0x00, 0x82, 0x61,
    0x6E, 0x74, 0x00, 0x0C, 0x11, 0x0A, 0x12, 0x06, 0x00, 0x82, 0x61, 0x6E, 0x74, 0x00, 0x0C, 0x13,
    0x00, 0x83, 0x72, 0x69, 0x6E, 0x74, 0x00, 0x12, 0x06, 0x00, 0x82, 0x6E, 0x73, 0x74, 0x00, 0x55,
    0x16, 0x0A, 0x16, 0x2D, 0x0A, 0x00, 0x13, 0x00, 0x48, 0x1F, 0x0A, 0x10, 0x26, 0x0A, 0x00, 0x15,
    0x00, 0x82, 0x6F, 0x72, 0x74, 0x00, 0x0C, 0x00, 0x82, 0x6F, 0x72, 0x74, 0x00, 0x10, 0x0F, 0x04,
    0x00, 0x82, 0x6F, 0x73, 0x74, 0x00, 0x08, 0x0C, 0x06, 0x08, 0x15, 0x00, 0x83, 0x65, 0x69, 0x70,
    0x74, 0x00, 0x13, 0x10, 0x0C, 0x00, 0x81, 0x6F, 0x72, 0x74, 0x00, 0x50, 0x52, 0x0A, 0x18, 0x5C,
    0x0A, 0x00, 0x12, 0x0F, 0x04, 0x00, 0x83, 0x6D, 0x6F, 0x73, 0x74, 0x00, 0x0D, 0x04, 0x2C, 0x00,
    0x83, 0x64, 0x6A, 0x75, 0x73, 0x74, 0x00, 0x52, 0x71, 0x0A, 0x13, 0x89, 0x0A, 0x17, 0xA0, 0x0A,
    0x00, 0x44, 0x78, 0x0A, 0x05, 0x81, 0x0A, 0x00, 0x05, 0x00, 0x84, 0x61, 0x62, 0x6F, 0x75, 0x74,
    0x00, 0x05, 0x04, 0x00, 0x83, 0x6F, 0x75, 0x74, 0x00, 0x57, 0x90, 0x0A, 0x18, 0x98, 0x0A, 0x00,
    0x11, 0x0C, 0x00, 0x83, 0x70, 0x75, 0x74, 0x00, 0x12, 0x00, 0x82, 0x74, 0x70, 0x75, 0x74, 0x00,
    0x13, 0x18, 0x12, 0x00, 0x83, 0x74, 0x70, 0x75, 0x74, 0x00, 0x17, 0x12, 0x05, 0x04, 0x00, 0x81,
    0x75, 0x74, 0x00, 0x48, 0xBA, 0x0A, 0x0C, 0xDE, 0x0A, 0x00, 0x44, 0xC1, 0x0A, 0x0C, 0xC8, 0x0A,
    0x00, 0x0B, 0x2C, 0x00, 0x81, 0x76, 0x65, 0x00, 0x46, 0xCF, 0x0A, 0x08, 0xD7, 0x0A, 0x00, 0x08,
    0x15, 0x00, 0x82, 0x65, 0x69, 0x76, 0x00, 0x06, 0x08, 0x15, 0x00, 0x81, 0x76, 0x00, 0x08, 0x0B,
    0x06, 0x04, 0x2C, 0x00, 0x82, 0x69, 0x65, 0x76, 0x00, 0x11, 0x12, 0x0E, 0x2C, 0x00, 0x82, 0x6E,
    0x6F, 0x77, 0x00, 0x46, 0x0C, 0x0B, 0x08, 0x47, 0x0B, 0x0B, 0x51, 0x0B, 0x0F, 0x63, 0x0B, 0x11,
    0xB5, 0x0B, 0x15, 0xD0, 0x0B, 0x16, 0x42, 0x0C, 0x17, 0x5D, 0x0C, 0x00, 0x44, 0x19, 0x0B, 0x08,
    0x25, 0x0B, 0x0C, 0x30, 0x0B, 0x13, 0x3B, 0x0B, 0x00, 0x15, 0x06, 0x12, 0x13, 0x1C, 0x0B, 0x00,
    0x82, 0x69, 0x73, 0x79, 0x00, 0x18, 0x14, 0x08, 0x15, 0x09, 0x00, 0x81, 0x6E, 0x63, 0x79, 0x00,
    0x15, 0x06, 0x12, 0x13, 0x1C, 0x0B, 0x00, 0x81, 0x73, 0x79, 0x00, 0x18, 0x15, 0x0E, 0x11, 0x04,
    0x05, 0x00, 0x81, 0x74, 0x63, 0x79, 0x00, 0x17, 0x09, 0x04, 0x16, 0x00, 0x82, 0x65, 0x74, 0x79,
    0x00, 0x06, 0x15, 0x04, 0x15, 0x0C, 0x08, 0x0B, 0x00, 0x87, 0x69, 0x65, 0x72, 0x61, 0x72, 0x63,
    0x68, 0x79, 0x00, 0x44, 0x6D, 0x0B, 0x0F, 0x8F, 0x0B, 0x12, 0xAB, 0x0B, 0x00, 0x45, 0x77, 0x0B,
    0x08, 0x80, 0x0B, 0x0F, 0x86, 0x0B, 0x00, 0x12, 0x15, 0x13, 0x00, 0x81, 0x62, 0x6C, 0x79, 0x00,
    0x15, 0x00, 0x80, 0x6C, 0x79, 0x00, 0x08, 0x15, 0x00, 0x83, 0x61, 0x6C, 0x6C, 0x79, 0x00, 0x44,
    0x96, 0x0B, 0x08, 0xA1, 0x0B, 0x00, 0x16, 0x18, 0x2C, 0x00, 0x83, 0x75, 0x61, 0x6C, 0x6C, 0x79,
    0x00, 0x04, 0x15, 0x00, 0x84, 0x65, 0x61, 0x6C, 0x6C, 0x79, 0x00, 0x10, 0x12, 0x11, 0x04, 0x00,
    0x82, 0x61, 0x6C, 0x79, 0x00, 0x48, 0xBC, 0x0B, 0x13, 0xC5, 0x0B, 0x00, 0x12, 0x10, 0x2C, 0x00,
    0x82, 0x6E, 0x65, 0x79, 0x00, 0x04, 0x10, 0x12, 0x06, 0x00, 0x83, 0x70, 0x61, 0x6E, 0x79, 0x00,
    0x44, 0xD7, 0x0B, 0x17, 0x33, 0x0C, 0x00, 0x45, 0xE4, 0x0B, 0x0C, 0xED, 0x0B, 0x0F, 0xFA, 0x0B,
    0x16, 0x16, 0x0C, 0x00, 0x0C, 0x0F, 0x00, 0x82, 0x72, 0x61, 0x72, 0x79, 0x00, 0x0F, 0x0F, 0x0C,
    0x1B, 0x18, 0x04, 0x00, 0x84, 0x69, 0x61, 0x72, 0x79, 0x00, 0x4C, 0x01, 0x0C, 0x0F, 0x0B, 0x0C,
    0x00, 0x1B, 0x18, 0x04, 0x00, 0x82, 0x69, 0x61, 0x72, 0x79, 0x00, 0x0C, 0x1B, 0x18, 0x04, 0x00,
    0x83, 0x69, 0x61, 0x72, 0x79, 0x00, 0x08, 0x06, 0x00, 0x46, 0x20, 0x0C, 0x08, 0x2B, 0x0C, 0x00,
    0x08, 0x11, 0x00, 0x85, 0x65, 0x73, 0x73, 0x61, 0x72, 0x79, 0x00, 0x11, 0x00, 0x82, 0x73, 0x61,
    0x72, 0x79, 0x00, 0x11, 0x18, 0x06, 0x12, 0x2C, 0x00, 0x86, 0x63, 0x6F, 0x75, 0x6E, 0x74, 0x72,
    0x79, 0x00, 0x04, 0x00, 0x55, 0x4B, 0x0C, 0x1A, 0x56, 0x0C, 0x00, 0x06, 0x12, 0x13, 0x1C, 0x0B,
    0x00, 0x82, 0x69, 0x73, 0x79, 0x00, 0x0F, 0x04, 0x00, 0x81, 0x79, 0x73, 0x00, 0x09, 0x04, 0x16,
    0x00, 0x81, 0x65, 0x74, 0x79, 0x00
};
