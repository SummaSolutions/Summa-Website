jQuery(document).ready(function () {
    jQuery(".manifesto-accordion").greatestAccordion({
        li_selector: 'li',
        title_selector: '.views-field-title',
        body_selector: '.views-field-body',
        single_mode: true
    });
})