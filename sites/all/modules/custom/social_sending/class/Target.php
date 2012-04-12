<?php
/**
 * Description of Target
 *
 * @author tomas
 */
abstract class Target {
  
  protected $name;
  protected $api_key;
  protected $user;
  protected $password;

  /**
   * constructor
   *
   */
  public function __construct($name, $api_key, $user, $password) {
      $this->name = $name;
      $this->api_key = $api_key;
      $this->user = $user;
      $this->password = $password;
  }

  /**
   * getters
   * @return <type>
   */
  public function getName() {
      return $this->name;
  }
  
  public function getApi_key() {
      return $this->api_key;
  }

  public function getUser() {
      return $this->user;
  }

  public function getPassword() {
      return $this->password;
  }
  
}
?>
