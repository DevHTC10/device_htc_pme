/* props/ee_uk-1.21: EE UK: EVE__001 */
static bool is_variant_ee_uk(std::string bootcid) {
    if (bootcid == "EVE__001") return true;
    return false;
}

static const char *htc_ee_uk_properties =
    "ro.build.fingerprint=htc/pmeuhl_00091/htc_pmeuhl:6.0.1/MMB29M/738269.4:user/release-keys\n"
    "ro.build.product=htc_pmeuhl\n"
    "ro.product.device=htc_pmeuhl\n"
    "ro.product.model=HTC_10\n"
    "ro.telephony.ipv6_capability=1\n"
    "ro.ril.oem.ecclist=999,112,911\n"
    "ro.ril.enable.a52=0\n"
    "ro.ril.enable.a53=1\n"
    "ro.ril.enable.gea3=1\n"
    "ro.ril.enable.amr.wideband=1\n"
    "ro.ril.enable.sdr=0\n"
    "ro.ril.enable.pre_r8fd=1\n"
    "ro.ril.fd.pre_r8_tout.scr_off=3\n"
    "ro.ril.fd.pre_r8_tout.scr_on=0\n"
    "ro.ril.enable.r8fd=1\n"
    "ro.ril.fd.r8_tout.scr_off=3\n"
    "ro.ril.fd.r8_tout.scr_on=5\n"
    "ro.ril.disable.mcc.filter=1\n"
    "ro.ril.air.enabled=1\n"
    "ro.ril.gsm.to.lte.blind.redir=1\n"
    "ro.ril.enable.isr=1\n"
    "ro.ril.ltefgi=1561329280\n"
    "ro.ril.ltefgi.rel9=3229614080\n"
    "ro.ril.disable.sync_pf=0\n"
    "ro.ril.hsxpa=5\n"
    "ro.ril.hsdpa.category=24\n"
    "ro.ril.hsupa.category=6\n"
    "ro.ril.disable.cpc=1\n"
    "ro.ril.ltefgi.rel10=3145728\n"
    "persist.radio.VOLTE_ENABLE=1\n"
    "persist.radio.VT_ENABLE=0\n"
    "persist.radio.WIFI_CALL_ENABLE=1\n"
    "persist.radio.SS_OVER_UT=0\n"
    "persist.radio.VT_HYBRID_ENABLE=0\n"
    "persist.radio.ROTATION_ENABLE=0\n"
    "persist.radio.RATE_ADAPT_ENABLE=0\n"
    "persist.radio.IMS_SETTING_TYPE=0\n"
    "persist.rild.nitz_plmn=\n"
    "persist.rild.nitz_long_ons_0=\n"
    "persist.rild.nitz_long_ons_1=\n"
    "persist.rild.nitz_long_ons_2=\n"
    "persist.rild.nitz_long_ons_3=\n"
    "persist.rild.nitz_short_ons_0=\n"
    "persist.rild.nitz_short_ons_1=\n"
    "persist.rild.nitz_short_ons_2=\n"
    "persist.rild.nitz_short_ons_3=\n"
    "ril.subscription.types=NV,RUIM\n"
    "telephony.lteOnCdmaDevice=1\n"
    "telephony.lteOnCdmaDevice=0\n"
    "persist.radio.fill_eons=1\n"
    "persist.igps.sensor=on\n"
    "persist.radio.custom_ecc=1\n"
    "persist.radio.apm_sim_not_pwdn=0\n"
    "persist.radio.apm_mdm_not_pwdn=1\n"
    "ro.telephony.default_network=9\n"
    "persist.radio.sap_silent_pin=1\n"
    "ro.gps.agps_provider=1\n"
;
