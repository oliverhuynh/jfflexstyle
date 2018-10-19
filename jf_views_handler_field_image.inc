<?php


class jf_views_handler_field_image extends views_handler_field {
  var $valuesuri;
  public function render($values) {
    $values = parent::render($values);
    if ($values) {
      $this->valuesuri = $values = imagecache_external_generate_path($values);
      $values = file_create_url($values);
    }
    return $values;
  }
}
