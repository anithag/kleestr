(set-logic QF_AUFBV )
(declare-fun a () (Array (_ BitVec 32) (_ BitVec 8) ) )
(assert (and  (and  (and  (and  (and  (=  (_ bv0 8) (select  a (_ bv9 32) ) ) (=  (_ bv72 8) (select  a (_ bv0 32) ) ) ) (=  (_ bv101 8) (select  a (_ bv1 32) ) ) ) (=  (_ bv108 8) (select  a (_ bv2 32) ) ) ) (=  (_ bv108 8) (select  a (_ bv3 32) ) ) ) (=  (_ bv0 8) (select  a (_ bv4 32) ) ) ) )
(check-sat)
(exit)
